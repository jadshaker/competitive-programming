
n = int(input())
a = list(map(int, input().split()))
mini = min(a)
maxi = max(a)
total = len(a)
for i in range(len(a)):
	if a[i] == mini or a[i] == maxi:
		total -= 1
print(total)
