t = int(input())
for _ in range(t):
	a, b, c, d = map(int, input().split())
	if b >= a:
		total = b
	elif d >= c:
		total = -1
	else:
		a -= b
		total = b + (a + c - d - 1) // (c - d) * c
	print(total)
