n, k = map(int, input().split())
a = list(map(int, input().split()))
b = 0
for i in range(1, n):
    b += max(0, k - a[i] - a[i - 1])
    a[i] += max(0, k - a[i] - a[i - 1])
print(b)
print(*a, sep=' ')
