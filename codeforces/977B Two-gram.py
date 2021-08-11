def count(s, sub):
	count = 0
	for i in range(0, len(s) - 1):
		if sub == s[i] + s[i + 1]:
			count += 1
	return count


n = int(input())
s = input()
best = 0
for i in range(0, n - 1):
	if count(s[i:], s[i] + s[i + 1]) > best:
		best = count(s[i:], s[i] + s[i + 1])
		sub = s[i] + s[i + 1]
print(sub)
