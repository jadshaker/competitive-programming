t = int(input())
for _ in range(t):
	n = int(input())
	if n % 2:
		print(7, end='')
		n -= 3
	for __ in range(int(n / 2)):
		print(1, end='')
	print()
