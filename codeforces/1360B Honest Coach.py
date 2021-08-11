t = int(input())
while t > 0:
	n = int(input())
	s = input().split()
	for i in range(0, n):
		s[i] = int(s[i])
	s.sort()
	best = abs(s[0] - s[1])
	for i in range(0, n - 1):
		if abs(s[i] - s[i + 1]) < best:
			best = abs(s[i] - s[i + 1])
	print(best)
	t += -1
