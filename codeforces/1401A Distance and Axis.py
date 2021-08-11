t = int(input())
while t > 0:
	t -= 1
	k = input().split()
	n = int(k[0])
	k = int(k[1])
	if n < k:
		print(k - n)
		continue
	if (n + k) % 2:
		print(1)
		continue
	print(0)
