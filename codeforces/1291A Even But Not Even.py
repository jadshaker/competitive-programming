for _ in range(int(input())):
	n = int(input())
	s = input()
	count = 0
	nbs = []
	for nb in s:
		if int(nb) % 2:
			count += 1
			nbs.append(int(nb))
		if count == 2:
			print(f'{nbs[0]}{nbs[1]}')
			break
	if count != 2:
		print(-1)