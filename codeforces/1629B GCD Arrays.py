for _ in range(int(input())):
    l, r, k = map(int, input().split())
    if l == r:
        print('YES' if l != 1 else 'NO')
        continue
    if l % 2:
        l -= 1
    if r % 2:
        r += 1
    if (r - l) / 2 <= k:
        print('YES')
    else:
        print('NO')
