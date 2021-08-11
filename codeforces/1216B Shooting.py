n = int(input())
a = list(map(int, input().split()))
b = sorted(a, reverse=True)
total = 0
order = []
if a == b:
	for i in range(n):
		order.append(i + 1)
		total += b[i] * i + 1
else:
	for i in range(n):
		order.append(a.index(b[i]) + 1)
		a[a.index(b[i])] = -1
		total += b[i] * i + 1
print(total)
print(*order, sep=' ')
