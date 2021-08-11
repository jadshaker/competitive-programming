for _ in range(int(input())):
    a, b, c = map(int, input().split())
    print(-1 if a >= c else 1, end=' ')
    print(-1 if c >= a * b else b)
