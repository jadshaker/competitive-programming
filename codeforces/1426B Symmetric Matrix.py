for _ in range(int(input())):
	n, m = map(int, input().split())
	a = []
	for i in range(n):
		a.append([[int(x) for x in input().split()] for i in range(2)])
	start = False
	for i in range(n):
		start |= a[i][0][1] == a[i][1][0]
	start &= m % 2 == 0
	print('YES' if start else 'NO')
