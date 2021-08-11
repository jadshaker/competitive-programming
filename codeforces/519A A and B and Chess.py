weights = {'K': 0, 'P': 1, 'N': 3, 'B': 3, 'R': 5, 'Q': 9, 'k': 0, 'p': -1, 'n': -3, 'b': -3, 'r': -5, 'q': -9, '.': 0}

total = 0
s = ''
for _ in range(8):
	s += input()
for i in range(64):
	total += weights[s[i]]

if total > 0:
	print('White')
elif total < 0:
	print('Black')
else:
	print('Draw')
