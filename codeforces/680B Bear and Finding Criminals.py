n, a = map(int, input().split())
t = list(map(int, input().split()))
ans = 0
for i in range(1, n + 1):
    if t[i - 1]:
        d = i - a
        j = a - d
        if j < 1 or j > n or t[i - 1] == t[j - 1]:
            ans += 1
print(ans)
