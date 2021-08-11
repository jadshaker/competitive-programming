n, l, r = map(int, input().split())
s = 0
for i in range(l):
	s += 2 ** i
print(s + n - l, end=' ')
s = 0
for i in range(r):
	s += 2 ** i
print(s + 2 ** (r - 1) * (n - r))
