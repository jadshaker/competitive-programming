for i in range(int(input())):
	n = int(input())
	s = list(map(int, input()))
	even = False
	odd = False
	for i in range(n):
		if (i + 1) % 2:
			odd |= s[i] % 2
		else:
			even |= s[i] % 2 == 0
	if n % 2:
		print(1 if odd else 2)
	else:
		print(2 if even else 1)
