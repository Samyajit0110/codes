def constructPath(L, grid, tail):

    (i, j) = tail
    path = [tail]

    while L[i][j]:
        if i - 1 >= 0 and L[i][j] - L[i - 1][j] == 1 and \
                abs(grid[i - 1][j] - grid[i][j]) == 1:
            path.append((i - 1, j))
            i = i - 1
        elif j - 1 >= 0 and L[i][j] - L[i][j - 1] == 1 and \
                abs(grid[i][j - 1] - grid[i][j]) == 1:
            path.append((i, j - 1))
            j = j - 1

    return path


def findMaxLengthSnakeSequence(grid):

    if not grid or not len(grid):
        return
    L = [[0 for x in range(len(grid))] for y in range(len(grid))]
    max_so_far = 0

    tail = None

    for i in range(len(grid)):
        for j in range(len(grid)):

            if i - 1 >= 0 and abs(grid[i - 1][j] - grid[i][j]) == 1:
                L[i][j] = L[i - 1][j] + 1
                if max_so_far < L[i][j]:
                    max_so_far = L[i][j]
                    tail = (i, j)

            if j - 1 >= 0 and abs(grid[i][j - 1] - grid[i][j]) == 1:

                L[i][j] = max(L[i][j], L[i][j - 1] + 1)
                if max_so_far < L[i][j]:
                    max_so_far = L[i][j]
                    tail = (i, j)
    return constructPath(L, grid, tail)


def printSnakeSequence(grid, path):
    if not grid or not len(grid):
        return
    print('The maximum length snake sequence ', end='')
    print(' — '.join([str(grid[x][y]) for x, y in path][::-1]))
    print('The length is', len(path) - 1)


if __name__ == '__main__':

    grid = [
        [7, 5, 2, 3, 1],
        [3, 4, 1, 4, 4],
        [1, 5, 6, 7, 8],
        [3, 4, 5, 8, 9],
        [3, 2, 2, 7, 6]
    ]

    path = findMaxLengthSnakeSequence(grid)
    printSnakeSequence(grid, path)
