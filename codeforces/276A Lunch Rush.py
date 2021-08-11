n, k = map(int, input().split())
joy = []
for _ in range(n):
	f, t = map(int, input().split())
	if t > k:
		joy.append(f - t + k)
	else:
		joy.append(f)
print(max(joy))
