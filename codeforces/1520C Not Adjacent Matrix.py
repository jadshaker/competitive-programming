for _ in range(int(input())):
    n = int(input())
    if n == 1 or n == 2:
        print(-1 if n == 2 else 1)
        continue
    matrix = []
    matrix.append([])
    for i in range(1, n ** 2 + 1, 2):
        if len(matrix[-1]) == n:
            matrix.append([])
        matrix[-1].append(i)
    for i in range(2, n ** 2 + 1, 2):
        if len(matrix[-1]) == n:
            matrix.append([])
        matrix[-1].append(i)
    for row in matrix:
        print(*row, sep=' ')
