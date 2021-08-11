# Bismilla
# In the name of GOD

k = input().split()
n = int(k[0])
m = int(k[1])
k = int(k[2])
if min(n, m, k) < n:
	print('No')
else:
	print('Yes')
