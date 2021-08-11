n, t = map(int, input().split())
a = [''] + list(map(int, input().split()))
nb = 1
while nb < t:
	nb += a[nb]
print('YES' if nb == t else 'NO')
