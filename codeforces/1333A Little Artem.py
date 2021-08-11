from typing import Container


for _ in range(int(input())):
    n, m = map(int, input().split())
    board = []
    if n == m == 2:
        print('BB\nBW')
        continue
    for i in range(n):
        board.append([])
        for j in range(m):
            if i % 2:
                if j % 2:
                    board[i].append('B')
                else:
                    board[i].append('W')
            else:
                if j % 2:
                    board[i].append('W')
                else:
                    board[i].append('B')
    if board[-1][-1] == 'B':
        board[-1][0] = 'B'
    else:
        board[-1][-1] = 'B'
    for row in board:
        print(*row, sep='')
