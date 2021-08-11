def solve():
	n = int(input())
	a = list(map(int, input().split()))
	for i in range(1, n):
		if a[i] < a[i - 1]:
			continue
		else:
			return 'YES'
	return 'NO'


t = int(input())
for _ in range(t):
	print(solve())
