t = int(input())
for _ in range(t):
	n, k = map(int, input().split())
	total = n - n % k
	total += min(n % k, int(k / 2))
	print(total)
