t = int(input())
c = 0
m = 0
while t > 0:
	x = input().split()
	a = int(x[0])
	b = int(x[1])
	if a > b:
		m += 1
	elif b > a:
		c += 1
	t += -1
if m > c:
	print('Mishka')
elif c > m:
	print('Chris')
else:
	print('Friendship is magic!^^')
