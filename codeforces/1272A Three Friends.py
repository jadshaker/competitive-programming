for _ in range(int(input())):
	a, b, c = map(int, input().split())
	total = abs(a - b) + abs(a - c) + abs(b - c)
	for xa in range(-1, 2):
		for xb in range(-1, 2):
			for xc in range(-1, 2):
				nba = a + xa
				nbb = b + xb
				nbc = c + xc
				total = min(total, abs(nba - nbb) + abs(nba - nbc) + abs(nbb - nbc))
	print(total)
