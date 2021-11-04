from math import ceil

n = int(input())
s = list(map(int, input().split()))
one, two, three, four = s.count(1), s.count(2), s.count(3), s.count(4)
total = four
while one and three:
    total += 1
    one -= 1
    three -= 1

total += three
while two > 1:
    total += 1
    two -= 2

if two:
    total += 1
    one -= 2

if one > 0:
    total += ceil(one / 4)

print(total)
