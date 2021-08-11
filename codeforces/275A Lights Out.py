grid = [[0, 0, 0, 0, 0]]
grid.append([0] + list(map(int, input().split())) + [0])
grid.append([0] + list(map(int, input().split())) + [0])
grid.append([0] + list(map(int, input().split())) + [0])
grid.append([0, 0, 0, 0, 0])
for i in range(1, 4):
	for j in range(1, 4):
		if grid[i][j] % 2:
			grid[i][j] = 1
		else:
			grid[i][j] = 0
g = [[0, 0, 0], [0, 0, 0], [0, 0, 0]]
for i in range(3):
	for j in range(3):
		g[i][j] = grid[i + 1][j] + grid[i][j + 1] + grid[i + 1][j + 2] + grid[i + 2][j + 1] + grid[i + 1][j + 1]
for i in range(3):
	for j in range(3):
		if g[i][j] % 2:
			g[i][j] = 1
		else:
			g[i][j] = 0
for i in range(3):
	for j in range(3):
		print(0 if g[i][j] == 1 else 1, end='')
	print()
