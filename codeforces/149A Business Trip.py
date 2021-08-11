k = int(input())
a = input().split()
for i in range(0, 12):
	a[i] = int(a[i])
a.sort()
count = 0
while count < 12 and k > 0:
	count += 1
	k -= a[-1]
	a.pop(-1)
if k > 0:
	count = -1
print(count)
