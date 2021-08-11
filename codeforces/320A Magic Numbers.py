n = input() + '144'
i = 0
while i < len(n) - 3:
	if n[i:i + 3] == '144':
		i += 3
	elif n[i:i + 2] == '14':
		i += 2
	elif n[i] == '1':
		i += 1
	else:
		print('NO')
		exit()
print('YES')
