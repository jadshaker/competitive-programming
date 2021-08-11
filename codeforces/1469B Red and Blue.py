for _ in range(int(input())):
    n = int(input())
    r = list(map(int, input().split()))
    m = int(input())
    b = list(map(int, input().split()))
    a = [[-10 ** 9 for _ in range(m + 1)] for _ in range(n + 1)]
    a[0][0] = 0
    ans = 0
    for i in range(n + 1):
        for j in range(m + 1):
            if i < n:
                a[i + 1][j] = max(a[i + 1][j], a[i][j] + r[i])
            if j < m:
                a[i][j + 1] = max(a[i][j + 1], a[i][j] + b[j])
            ans = max(ans, a[i][j])
    print(ans)
