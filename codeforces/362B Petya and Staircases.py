n, m = map(int, input().split())
if m == 0:
    print('YES')
    exit()
d = list(map(int, input().split()))
d.sort()
if 1 in d or n in d:
    print('NO')
    exit()
for i in range(1, len(d) - 1):
    if d[i - 1] + 1 == d[i] == d[i + 1] - 1:
        print('NO')
        exit()
print('YES')
