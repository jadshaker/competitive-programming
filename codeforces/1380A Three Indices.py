t = int(input())
for _ in range(t):
	n = int(input())
	p = list(map(int, input().split()))
	no = True
	for i in range(1, n - 1):
		if p[i] > p[i - 1] and p[i] > p[i + 1]:
			print(f'YES\n{i} {i + 1} {i + 2}')
			no = False
			break
	if no:
		print('NO')
