for _ in range(int(input())):
    n, m, x, y = map(int, input().split())
    ans = 0
    y = min(y, 2 * x)
    for _ in range(n):
        s = input()
        i = 0
        while i < m:
            if s[i] == '*':
                i += 1
            else:
                j = i
                while j + 1 < m and s[j + 1] == '.':
                    j += 1
                l = j - i + 1
                ans += l % 2 * x + l // 2 * y
                i = j + 1
    print(ans)
