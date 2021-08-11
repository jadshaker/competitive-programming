n = int(input())
l = 0
for i in range(1, int(n / 2) + 1):
	if n % i == 0:
		l += 1
print(l)
