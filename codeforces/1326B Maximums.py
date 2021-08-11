n = int(input())
b = list(map(int, input().split()))
a = [b[0]]
maxi = a[0]
for i in range(1, n):
	maxi = max(maxi, a[i - 1])
	a.append(maxi + b[i])
print(*a, sep=' ')
