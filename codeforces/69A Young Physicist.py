x = 0
y = 0
z = 0
for _ in range(int(input())):
	x_, y_, z_ = map(int, input().split())
	x += x_
	y += y_
	z += z_
if x or y or z:
	print('NO')
else:
	print('YES')
