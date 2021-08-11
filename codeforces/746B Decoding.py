
n = int(input())
s = input()
ans = ''
if n % 2:
	for i in range(n):
		if i % 2:
			ans = s[i] + ans
		else:
			ans += s[i]
else:
	for i in range(n):
		if i % 2:
			ans += s[i]
		else:
			ans = s[i] + ans

print(ans)
