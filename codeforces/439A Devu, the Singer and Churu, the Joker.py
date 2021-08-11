n, d = map(int, input().split())
t = list(map(int, input().split()))
c = d - (sum(t) + (n - 1) * 10)
x = -1
if c >= 0:
	x = (n - 1) * 2
	x += int(c / 5)
print(x)
