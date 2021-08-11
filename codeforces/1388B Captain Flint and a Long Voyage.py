for _ in range(int(input())):
    n = int(input())
    x = (n + 3) // 4
    for i in range(n - x):
        print(9, end='')
    for i in range(x):
        print(8, end='')
    print()
