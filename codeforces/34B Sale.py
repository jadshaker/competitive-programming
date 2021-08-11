m = input().split()
n = int(m[0])
m = int(m[1])
a = input().split()
for i in range(0, n):
	a[i] = int(a[i])
a.sort()
count = 0
i = 0
while m > 0 and a[i] < 0:
	m -= 1
	count -= a[i]
	i += 1
print(count)
