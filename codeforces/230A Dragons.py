s, n = map(int, input().split())
a = []
for i in range(n):
	a.append(list(map(int, input().split())))
a.sort()
for i in range(n):
	if s <= a[i][0]:
		print('NO')
		exit()
	else:
		s = s + a[i][1]
print('YES')
