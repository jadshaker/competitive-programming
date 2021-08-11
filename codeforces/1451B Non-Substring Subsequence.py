for _ in range(int(input())):
	n, q = map(int, input().split())
	s = input()
	for _ in range(q):
		l, r = map(int, input().split())
		yes = False
		for i in range(l - 1):
			if s[i] == s[l - 1]:
				yes = True
		for i in range(r, n):
			if s[i] == s[r - 1]:
				yes = True
		print('YES' if yes else 'NO')
