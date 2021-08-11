def least_divisible(n):
	for i in range(2, int(n ** 0.5) + 1):
		if n % i == 0:
			return i
	return n


t = int(input())
while t > 0:
	t -= 1
	k = input().split()
	n = int(k[0])
	k = int(k[1])
	if n % 2:
		n += 2 * (k - 1) + least_divisible(n)
	else:
		n += 2 * k
	print(n)
