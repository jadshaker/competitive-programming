for _ in range(int(input())):
    r, g, b, w = map(int, input().split())
    if r % 2 + g % 2 + b % 2 + w % 2 <= 1:
        print('YES')
    elif r > 0 and g > 0 and b > 0 and (r - 1) % 2 + (g - 1) % 2 + (b - 1) % 2 + (w + 1) % 2 <= 1:
        print('YES')
    else:
        print('NO')
