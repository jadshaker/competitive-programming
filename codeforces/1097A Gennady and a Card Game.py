c = input()
x = input().split()
for i in x:
	if i[0] == c[0] or i[1] == c[1]:
		print('YES')
		exit()
print('NO')
