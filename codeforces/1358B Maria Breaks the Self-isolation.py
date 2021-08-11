for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    a.sort()
    ans = 1
    for i in range(n - 1, -1, -1):
        if a[i] <= i + 1:
            ans = i + 2
            break
    print(ans)
