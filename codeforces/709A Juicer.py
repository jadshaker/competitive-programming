
n, b, d = map(int, input().split())
a = list(map(int, input().split()))
t_size = 0
total = 0

for orange in a:
	if orange > b:
		continue
	t_size += orange
	if t_size > d:
		total += 1
		t_size = 0
print(total)
