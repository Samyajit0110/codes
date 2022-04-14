from operator import truediv
import cv2
import mediapipe as mp
import time

capture = cv2.VideoCapture(0)  # getting a video capture object for the camera
mp_hands = mp.solutions.hands
hands = mp_hands.Hands()
mpDraw = mp.solutions.drawing_utils

prev_time = 0
current_time = 0
while True:
    # reading the frames in the object "capture" in an infinite loop {capture.read()}
    success, image = capture.read()
    # cap.read() returns a tuple consisting of a boolean and an array (frame)
    # converting image to rgb {cvtColour(src,conversion)}.
    image_in_RGB = cv2.cvtColor(image, cv2.COLOR_BGR2RGB)
    hand_results = hands.process(image_in_RGB)
    print(hand_results.multi_hand_landmarks)

    if hand_results.multi_hand_landmarks:
        for detected_hands in hand_results.multi_hand_landmarks:
            mpDraw.draw_landmarks(image, detected_hands,
                                  mp_hands.HAND_CONNECTIONS)
            for id, landmarks in enumerate(detected_hands.landmark):
                height, width, centre = image.shape
                cx, cy = int(landmarks.x*width), int(landmarks.y*height)
                cv2.circle(image, (cx, cy), 6, (255, 0, 255), cv2.FILLED)
    current_time = time.time()
    fps = 1/(current_time-prev_time)
    prev_time = current_time
    cv2.putText(image, str(int(fps)), (10, 70),
                cv2.FONT_HERSHEY_SIMPLEX, 3, (255, 0, 255), 3)
    # cv2.putText(image, text, org, font, fontScale, color[, thickness[, lineType[, bottomLeftToRightOrigin]]])
    cv2.imshow("image", cv2.flip(image,1))  # showing the captured frames
    cv2.waitKey(1)
    