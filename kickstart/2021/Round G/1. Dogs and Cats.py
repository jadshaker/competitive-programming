for T in range(int(input())):
    N, D, C, M = map(int, input().split())
    S = input()
    s = 'YES'
    for i in range(len(S)):
        if S[i] == 'C':
            if C:
                C -= 1
            else:
                if 'D' in S[i:]:
                    s = 'NO'
                break
        else:
            if D:
                D -= 1
                C += M
            else:
                s = 'NO'
    print(f'Case #{T + 1}: {s}')
