def perfect_number(n):
    "sum of digits of n is equal to 10"
    if n == 0:
        return False
    else:
        sum_digits = 0
        while n > 0:
            sum_digits += n % 10
            n //= 10
        return sum_digits == 10


k = int(input())
i = 18
while k:
    i += 1
    if perfect_number(i):
        k -= 1
print(i)
