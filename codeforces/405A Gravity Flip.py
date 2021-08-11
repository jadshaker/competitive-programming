n = int(input())
a = input().split()
for i in range(0, n):
	a[i] = int(a[i])
a.sort()
print(*a)
