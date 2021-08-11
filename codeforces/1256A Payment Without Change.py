for _ in range(int(input())):
    a, b, n, s = map(int, input().split())
    if s % n <= b:
        if s <= a * n + b:
            print('YES')
            continue
    print('NO')
