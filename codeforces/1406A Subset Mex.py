t = int(input())
for _ in range(t):
	total = 0
	n = int(input())
	a = list(map(int, input().split()))
	a.sort()
	A = [a.pop(0)]
	B = []
	while a:
		if a[0] != A[-1]:
			A.append(a.pop(0))
		else:
			B.append(a.pop(0))
	i = 0
	while A.count(i) > 0:
		i += 1
		continue
	total += i
	i = 0
	while B.count(i) > 0:
		i += 1
		continue
	total += i
	print(total)
