t = int(input())
while t > 0:
	a = input().split()
	a[0] = int(a[0])
	a[1] = int(a[1])
	a[2] = int(a[2])
	a.sort()
	if a[1] == a[2]:
		print(f'YES\n{a[0]} {a[0]} {a[2]}')
	else:
		print('NO')
	t += -1
