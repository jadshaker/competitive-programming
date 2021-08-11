n = int(input())
a = list(map(int, input().split()))
a.sort()
if a[1] - a[0] > a[-1] - a[-2]:
	a.pop(0)
else:
	a.pop(-1)
print(max(a) - min(a))
