a, b = map(int, input().split())
ans = 1
while a != b and ans:
    a += 1
    ans = (ans * a % 10) % 10
print(ans)
