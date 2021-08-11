from math import log2
x = int(input())
count = 1
while x > 1:
    if x % 2 == 0:
        x /= 2
    else:
        x -= 1
        count += 1
print(count)
