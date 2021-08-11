def divisors(n, x):
    i = 1
    count = 0
    while i <= x ** 0.5:
        if x % i == 0:
            if x / i > n:
                i += 1
                continue
            if x / i == i:
                count += 1
            else:
                count += 2
        i += 1
    return count


n, x = map(int, input().split())
print(divisors(n, x))
