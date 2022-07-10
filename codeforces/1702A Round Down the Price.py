t = int(input())

for _ in range(t):
    m = int(input())
    ans = str(int(str(m)[0]) - 1)
    for char in str(m)[1:]:
        ans += char
    print(int(ans))
