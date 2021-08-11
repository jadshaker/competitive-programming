t = int(input())
for _ in range(t):
	x = int(input())
	if x < 10:
		print(x % 10)
		continue
	if x > 45:
		print(-1)
		continue
	s = ''
	for i in range(9, 0, -1):
		if x - i >= 0:
			x -= i
			s += str(i)
		else:
			continue
	print(s[::-1])
