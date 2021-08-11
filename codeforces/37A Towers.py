n = int(input())
l = list(map(int, input().split()))
L = list(set(l))
ans = 0
for i in L:
    c = l.count(i)
    if c > ans:
        ans = c
print(f'{ans} {len(L)}')
