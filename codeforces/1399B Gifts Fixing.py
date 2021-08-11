# Bisimillah
# In the name of GOD

t = int(input())
while t > 0:
	count = 0
	n = int(input())
	a = input().split()
	b = input().split()
	for i in range(0, n):
		a[i] = int(a[i])
		b[i] = int(b[i])
	mina = min(a)
	minb = min(b)
	for i in range(0, n):
		if a[i] != mina and b[i] != minb:
			if a[i] - mina > b[i] - minb:
				count += b[i] - minb + (a[i] - mina - (b[i] - minb))
			else:
				count += a[i] - mina + (b[i] - minb - (a[i] - mina))
		else:
			if a[i] == mina:
				count += b[i] - minb
			else:
				count += a[i] - mina
	print(count)
	t += -1
