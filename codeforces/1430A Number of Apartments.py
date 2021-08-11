for _ in range(int(input())):
	n = int(input())
	if n == 1 or n == 2 or n == 4:
		print(-1)
		continue
	if n % 3 == 2:
		print(f'{int((n - 5) / 3)} 1 0')
	elif n % 3:
		print(f'{int((n - 7) / 3)} 0 1')
	else:
		print(f'{int(n / 3)} 0 0')
