def solve(n, a):
	for i in range(1, n):
		if a[0] % 2 != a[i] % 2:
			return 'NO'
	return 'YES'


t = int(input())
while t > 0:
	t -= 1
	n = int(input())
	a = input().split()
	for i in range(0, n):
		a[i] = int(a[i])
	print(solve(n, a))
