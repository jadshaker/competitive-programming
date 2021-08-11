k = int(input())
x = 5
while k > x ** 2 and k % x:
    x += 1
print((''.join(('uaieo' * k)[i:i + x] for i in range(k // x)), -1)[x ** 2 > k])
