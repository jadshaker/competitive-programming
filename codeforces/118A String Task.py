s = input().lower()
s = s.replace('y', '').replace('u', '').replace('i', '').replace('e', '').replace('o', '').replace('a', '')
for i in range(len(s)):
	print(f'.{s[i]}', end='')
