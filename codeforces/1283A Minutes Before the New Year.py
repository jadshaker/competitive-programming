t = int(input())
while t > 0:
	t -= 1
	m = input().split()
	h = int(m[0])
	m = int(m[1])
	print((23 - h) * 60 + 60 - m)
