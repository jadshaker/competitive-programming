for _ in range(int(input())):
	n = int(input())
	a = list(map(int, input().split()))
	if sorted(a) == a:
		count = 0
	elif a[0] == 1 or a[-1] == n:
		count = 1
	elif a[0] == n and a[n - 1] == 1:
		count = 3
	else:
		count = 2
	print(count)
