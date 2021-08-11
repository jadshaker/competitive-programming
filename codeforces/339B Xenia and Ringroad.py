n, m = map(int, input().split())
a = list(map(int, input().split()))
ans = a[0]
current = a[0]
for i in range(1, m):
	if a[i] >= current:
		ans += a[i] - current
	else:
		ans += n - current + a[i]
	current = a[i]
print(ans - 1)
