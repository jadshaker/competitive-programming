t = int(input())
while t > 0:
	b = input().split()
	a = int(b[0])
	b = int(b[1])
	if a == b:
		print(0)
	elif a > b:
		if a % 2 == 0:
			if b % 2 == 0:
				print(1)
			else:
				print(2)
		else:
			if b % 2 == 0:
				print(2)
			else:
				print(1)
	else:
		if a % 2 == 0:
			if b % 2 == 0:
				print(2)
			else:
				print(1)
		else:
			if b % 2 == 0:
				print(1)
			else:
				print(2)

	t += -1
