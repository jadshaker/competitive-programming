t = int(input())
while t > 0:
	t -= 1
	x = int(input())
	p = 1000000000000
	total = 0
	while x > 0:
		while x < p:
			p = int(p / 10)
		total += p
		x -= p - int(p / 10)
	print(total)
