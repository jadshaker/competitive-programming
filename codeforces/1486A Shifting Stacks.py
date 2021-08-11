t = int(input())
for _ in range(t):
	n = int(input())
	h = list(map(int, input().split()))
# 	if sum(h) - sum(range(n)) >= 0:
# 		print('YES')
# 	else:
# 		print('NO')
	x = 0
	y = 0
	a = True
	for i in range(n):
		x += i
		y += h[i]
		if y < x:
			a = False
	if a:
		print('YES')
	else:
		print('NO')
