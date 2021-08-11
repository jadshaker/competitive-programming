t = int(input())
while t > 0:
	t -= 1
	s = list(input())
	if min(s.count('0'), s.count('1')) % 2:
		print('DA')
		continue
	print('NET')
