t = int(input())
while t > 0:
	n = input()
	count = (int(n[0]) - 1) * 10 + 1
	if len(n) == 2:
		count += 2
	elif len(n) == 3:
		count += 5
	elif len(n) == 4:
		count += 9
	print(count)
	t += -1
