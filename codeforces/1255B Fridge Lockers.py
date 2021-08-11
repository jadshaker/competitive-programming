for _ in range(int(input())):
    n, m = map(int, input().split())
    a = list(map(int, input().split()))
    if m == n and n != 2:
        print(2 * sum(a))
        print(1, n)
        for i in range(1, n):
            print(i, i + 1)
    else:
        print(-1)
