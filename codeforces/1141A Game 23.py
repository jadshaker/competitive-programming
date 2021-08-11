n, m = map(int, input().split())
if m % n:
    print(-1)
    exit()
d = m / n
ans = 0
while d % 3 == 0:
    d /= 3
    ans += 1
while d % 2 == 0:
    d /= 2
    ans += 1
print(ans if d == 1 else -1)
