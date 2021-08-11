
from itertools import groupby

n = int(input())
a = list(map(int, input().split()))
if a.count(1):
	a += a
	print(len(max((list(g) for k, g in groupby(a, bool) if k), key=len)))
else:
	print(0)
