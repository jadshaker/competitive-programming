for _ in range(int(input())):
	n, k = map(int, input().split())
	a = list(map(int, input().split()))
	if (max(a) - min(a)) / 2 <= k:
		print(min(a) + k)
	else:
		print(-1)
