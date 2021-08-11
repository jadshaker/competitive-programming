a = input().split()
for i in range(0, 4):
	a[i] = int(a[i])
s = input()
count = 0
for i in range(0, len(s)):
	count += a[int(s[i]) - 1]
print(count)
