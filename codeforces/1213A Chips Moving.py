n = int(input())
x = list(map(int, input().split()))
for i in range(n):
	x[i] = x[i] - (x[i]- x[i] % 2)
print(min(x.count(0), x.count(1)))
