n = int(input())
a = input().split()
for i in range(0, n):
	a[i] = int(a[i])
best = 1
count = 1
for i in range(1, n):
	if a[i] >= a[i - 1]:
		count += 1
	else:
		if count > best:
			best = count
		count = 1
if count > best:
	print(count)
else:
	print(best)
