from math import ceil


n, m = map(int, input().split())
if m > n:
    print(-1)
elif m == n:
    print(m)
else:
    for i in range(ceil(n / 2), n):
        if i % m == 0:
            print(i)
            break
        if i == n - 1:
            print(-1)
