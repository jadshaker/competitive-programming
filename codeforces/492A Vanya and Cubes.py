n = int(input())
x = 0
h = 0
while x <= n:
	h += 1
	x += h * (h + 1) / 2
print(h - 1)
