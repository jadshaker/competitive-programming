for _ in range(int(input())):
    A, B = map(int, input().split())
    if B == 1:
        print('NO')
    else:
        print(f'YES\n{A * B} {A} {A + A * B}')
