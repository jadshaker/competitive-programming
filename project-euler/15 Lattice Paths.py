def factorial(n: int):
    if n == 0:
        return 1
    else:
        return n * factorial(n - 1)


n = 40
ans = factorial(n) // (factorial(n - 20) * factorial(20))
print(ans)
