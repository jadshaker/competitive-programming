n, t = map(int, input().split())
if len(str(t)) > n:
    ans = -1
elif len(str(t)) == n:
    ans = t
else:
    ans = t
    while len(str(ans)) < n:
        ans *= t
print(ans)
