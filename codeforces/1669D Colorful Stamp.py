for _ in range(int(input())):

    n = int(input())
    S = input().split('W')
    ans = 'YES'
    R = 'R'
    B = 'B'
    for s in S:
        if len(s) > 0:
            if R not in s or B not in s:
                ans = 'NO'
    print(ans)
