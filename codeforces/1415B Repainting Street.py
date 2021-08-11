from statistics import mode


for _ in range(int(input())):
    n, k = map(int, input().split())
    c = list(map(int, input().split()))
    c_ = set(c)
    ans = n
    for i in c_:
        j = 0
        s = 0
        while j < n:
            if c[j] != i:
                s += 1
                j += k
            else:
                j += 1
        ans = min(ans, s)
    print(ans)
