for _ in range(int(input())):
    a = input()
    b = input()
    n = len(a)
    m = len(b)
    ans = 0
    for i in range(1, min(n, m) + 1):
        for j in range(n - i + 1):
            for k in range(m - i + 1):
                if a[j:i + j] == b[k:i + k]:
                    ans = max(ans, i)
    print(len(a) + len(b) - 2 * ans)
