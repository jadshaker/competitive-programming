n, d = map(int, input().split())

(0, d), (d, 0), (n, n - d), (n - d, n)
for _ in range(int(input())):
    x, y = map(int, input().split())
    print('YES' if d <= x + y <= 2 * n - d and -d <= x - y <= d else 'NO')
