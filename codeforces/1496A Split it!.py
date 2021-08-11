for _ in range(int(input())):
	n, k = map(int, input().split())
	s = input()
	x = 1
	for i in range(0, k):
		x = x and s[i] == s[n - i - 1]
	print('YES' if x and k * 2 < n else 'NO')
