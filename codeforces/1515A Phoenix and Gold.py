t = int(input())
for _ in range(t):
	n, x = map(int, input().split())
	w = list(map(int, input().split()))
	if sum(w) == x:
		print('NO')
		continue
	print('YES')
	w.sort(reverse=True)
	total = 0
	while len(w) > 0:
		total += w[0]
		if total == x:
			total += w[1]
			print(w.pop(1), end=' ')
		print(w.pop(0), end=' ')
	print()
