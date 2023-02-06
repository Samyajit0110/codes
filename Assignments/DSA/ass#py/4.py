MAX = 100


def isSparse(array, m, n):

    counter = 0

    # Count number of zeros
    # in the matrix
    for i in range(0, m):
        for j in range(0, n):
            if (array[i][j] == 0):
                counter = counter + 1

    return (counter >
            ((m * n) // 2))


# Driver Function
array = [[1, 0, 3],
         [0, 0, 4],
         [6, 0, 0]]
m = 3
n = 3

if (isSparse(array, m, n)):
    print("Yes")
else:
    print("No")
    