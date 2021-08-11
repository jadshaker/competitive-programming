chars = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']

t = int(input())
while t > 0:
	t -= 1
	b = input().split()
	n = int(b[0])
	a = int(b[1])
	b = int(b[2])
	for i in range(0, n):
		print(chars[i % b], end = '')
	print()
