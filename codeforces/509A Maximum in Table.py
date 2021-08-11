def table(r, c):
	if r == 1 or c == 1:
		return 1
	return table(r - 1, c) + table(r, c - 1)

n = int(input())
print(table(n, n))
