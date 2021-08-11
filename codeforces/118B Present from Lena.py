n = int(input())
for i in range(n + 1):
    for j in range(i, n):
        print(end='  ')
    for k in range(i + 1):
        print(end=str(k))
        if i:
            print(end=' ')
    for k in range(i - 1, -1, -1):
        print(end=str(k))
        if k > 0:
            print(end=' ')
    print()
for i in range(n - 1, -1, -1):
    for j in range(n - 1, i - 1, -1):
        print(end='  ')
    for k in range(i + 1):
        print(end=str(k))
        if i:
            print(end=' ')
    for k in range(i - 1, -1, -1):
        print(end=str(k))
        if k:
            print(end=' ')
    print()
