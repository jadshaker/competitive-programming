m = input().split()
n = int(m[0])
m = int(m[1])
x = n + int(n / (m - 1))
if n % (m - 1) == 0:
	x -= 1
print(x)
