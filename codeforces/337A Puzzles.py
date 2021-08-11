m = input().split()
n = int(m[0])
m = int(m[1])
f = input().split()
for i in range(0, m):
	f[i] = int(f[i])
f.sort()
best = f[n - 1] - f[0]
for i in range(1, m - n + 1):
	if f[i + n - 1] - f[i] < best:
		best = f[i + n - 1] - f[i]
print(best)
