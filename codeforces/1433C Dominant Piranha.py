t = int(input())
for _ in range(t):
	n = int(input())
	a = list(map(int, input().split()))
	if max(a) == min(a):
		print(-1)
		continue
	maxi = max(a)
	for i in range(n):
		if a[i] != maxi:
			continue
		if i > 0 and a[i - 1] != maxi:
			ans = i + 1
			continue
		if i < n - 1 and a[i + 1] != maxi:
			ans = i + 1
	print(ans)
