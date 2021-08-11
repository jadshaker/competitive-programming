n = int(input())
i = n
s = input()
z = 0
o = 0
while i > 0:
	i -= 1
	if s[i] == '0':
		z += 1
	else:
		o += 1
print(n - min(z, o) * 2)
