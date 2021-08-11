n = int(input())
x = list(map(int, input().split()))
print(x[1] - x[0], x[-1] - x[0])
for i in range(1, n - 1):
	if x[i] - x[i - 1] < x[i + 1] - x[i]:
		mini = x[i] - x[i - 1]
	else:
		mini = x[i + 1] - x[i]
	if x[i] - x[0] < x[-1] - x[i]:
		maxi = x[-1] - x[i]
	else:
		maxi = x[i] - x[0]
	print(mini, maxi)
print(x[-1] - x[-2], x[-1] - x[0])
