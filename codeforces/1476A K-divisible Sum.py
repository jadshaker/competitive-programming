from math import ceil


for _ in range(int(input())):
    n, k = map(int, input().split())
    if n == k:
        print(1)
    elif n < k:
        if k % n:
            print(int(k / n) + 1)
        else:
            print(int(k / n))
    else:
        print(ceil(ceil(n / k) * k / n))
