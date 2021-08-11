from math import log
from math import floor


t = int(input())
for _ in range(t):
	n = int(input())
	if (n % 2 == 0 and ((n / 2) ** 0.5).is_integer()) or (n % 4 == 0 and ((n / 4) ** 0.5).is_integer()):
		print('YES')
	else:
		print('NO')
