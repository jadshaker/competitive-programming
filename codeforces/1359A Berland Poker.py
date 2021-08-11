for _ in range(int(input())):
    n, m, k = map(int, input().split())
    d = n // k
    a = [min(m, d)]
    a.append((m - a[0] + k - 2) // (k - 1))
    print(a[0] - a[1])
