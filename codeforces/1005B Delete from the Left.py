s = input()
t = input()
moves = 0
if len(s) > len(t):
	moves = len(s) - len(t)
	s = s[len(s) - len(t):]
elif len(t) > len(s):
	moves = len(t) - len(s)
	t = t[len(t) - len(s):]
for i in range(len(s) - 1, -1, -1):
	if s[i] != t[i]:
		moves += 2 * (i + 1)
		break
print(moves)
