n = int(input())
a = [0, 0, 0, 0]
t = input().split()
for i in range(0, n):
	a[int(t[i])] += 1
mini = min(a[1], a[2], a[3])
print(mini)
while mini > 0:
	print(t.index('1') + 1, end = ' ')
	t[t.index('1')] = 0
	print(t.index('2') + 1, end = ' ')
	t[t.index('2')] = 0
	print(t.index('3') + 1)
	t[t.index('3')] = 0
	mini += -1
