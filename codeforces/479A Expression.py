a = int(input())
b = int(input())
c = int(input())

print(max(max(a + b + c, (a + b) * c), max(a * (b + c), a * b * c)))
