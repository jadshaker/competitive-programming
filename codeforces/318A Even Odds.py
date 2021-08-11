k = input().split()
n = int(k[0])
k = int(k[1])
if k <= int(n / 2 + 0.5):
	print(k * 2 - 1)
else:
	print((k - int(n / 2 + 0.5)) * 2)
