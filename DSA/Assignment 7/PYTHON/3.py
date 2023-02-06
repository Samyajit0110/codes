def insertionSort(arr):
    size = len(arr)
    for i in range(1, size):
        curr = arr[i]
        j = i-1
        while j >= 0 and curr < arr[j]:
            arr[j+1] = arr[j]
            j -= 1
        arr[j+1] = curr


arr = [6, 2, 5, 7, 1, 4, 3]
insertionSort(arr)
print("Sorted Array is:")
print(arr)
