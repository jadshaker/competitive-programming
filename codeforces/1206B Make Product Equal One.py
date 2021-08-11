n = int(input())
a = list(map(int, input().split()))
count = 0
for i in range(n):
	if a[i] > 0:
		count += abs(a[i] - 1)
		a[i] = 1
	elif a[i] < 0:
		count += abs(a[i] + 1)
		a[i] = -1
if a.count(-1) % 2:
	if a.count(0):
		a[a.index(0)] = -1
		count += 1
	else:
		count += 2
count += a.count(0)
print(count)
