from math import ceil


n, m = map(int, input().split())
a = list(map(int, input().split()))
max = 0

for i in range(n):
    if ceil(a[i] / m) >= max:
        ans = i
        max = ceil(a[i] / m)
print(ans + 1)
