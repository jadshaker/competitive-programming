t = int(input())
while t > 0:
	n = input().split()
	w = int(n[0])
	h = int(n[1])
	n = int(n[2])
	while True:
		if n == 1:
			print('YES')
			break
		if n % 2 != 0:
			n += 1
		if w % 2 == 0:
			w /= 2
			n /= 2
		elif h % 2 == 0:
			h /= 2
			n /= 2
		if n == 1:
			print('YES')
			break
		if h % 2 != 0 and w % 2 != 0:
			print('NO')
			break
	t += -1