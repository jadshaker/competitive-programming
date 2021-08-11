n = int(input())
a = list(map(int, input().split()))
a.sort(reverse=True)
odd = 0
ans = 0
for i in range(n):
	if a[i] % 2:
		odd += 1
if odd % 2:
	odd -= 1
for i in range(n):
	if a[i] % 2:
		if odd:
			ans += a[i]
			odd -= 1
	else:
		ans += a[i]
print(ans)
