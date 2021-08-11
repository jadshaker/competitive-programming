for _ in range(int(input())):
    x, y = map(int, input().split())
    a, b = map(int, input().split())
    if 2 * a <= b:
        print(x * a + y * a)
    else:
        print(min(x, y) * b + (max(x, y) - min(x, y)) * a)
