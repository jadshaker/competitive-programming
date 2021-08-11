n = input()
if int(n) > 0:
	print(n)
elif len(n) == 3 and abs(int(n)) % 10 == 0:
	print(0)
else:
	print(n[0:-2], end = '')
	print(n[-1] if int(n[-1]) < int(n[-2]) else n[-2])
