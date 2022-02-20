T = int(input())
for t in range(1, T + 1):
    N, M = map(int, input().split())
    C = sum(map(int, input().split()))
    print(f'Case #{t}: {C % M}')
