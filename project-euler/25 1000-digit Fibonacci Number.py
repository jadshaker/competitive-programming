a, b, resultant = 1, 1, 2
while len(str(b)) < 1000:
    a, b = b, a + b
    resultant += 1
print(resultant)
