for _ in range(int(input())):
	n = int(input())
	ans = 2
	if n % 2:
		ans = 3
	a = []
	for i in range(n):
		if i == n - 1:
			a.append(f"1 {'0 ' * (i - 1)}1 ")
			break
		else:
			a.append('')
		for j in range(n):
			if j in range(i, i + 2):
				a[i] += '1 '
			else:
				a[i] += '0 '
	for line in a:
		print(line[:-1])
