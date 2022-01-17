def is_pentagonal(n: int):
    x = ((24 * n + 1) ** 0.5 + 1) / 6
    return x == int(x)


i = 143
while True:
    i += 1
    n = i * (2 * i - 1)
    if is_pentagonal(n):
        print(n)
        break
