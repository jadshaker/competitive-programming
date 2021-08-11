n = int(input())
a = [0] * n
p = [0] * n
for i in range(n):
	a[i], p[i] = map(int, input().split())
price = 0
for i in range(n):
	j = i + 1
	price += a[i] * p[i]
	while j < n:
		if p[i] < p[j]:
			price += a[j] * p[i]
			a[j] = 0
			j += 1
		else:
			break
print(price)
