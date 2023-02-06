def bubbleSort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1]:
                (arr[j], arr[j+1]) = (arr[j+1], arr[j])


arr = [6, 2, 5, 7, 1, 4, 3]
bubbleSort(arr)
print("Sorted Array is:")
print(arr)