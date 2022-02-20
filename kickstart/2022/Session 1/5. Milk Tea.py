def calculate_complains(tea: str, preferences: list) -> int:
    tea = tea[::-1]
    preferences = [pref[::-1] for pref in preferences]
    complains = 0
    for i in range(len(tea)):
        for pref in preferences:
            if pref[i] != tea[i]:
                complains += 1
    return complains


t = int(input())
for test_case in range(1, t + 1):
    S = ['']
    N, M, P = map(int, input().split())
    preferences = []
    forbidden = []
    for n in range(N):
        preferences.append(input())
    for m in range(M):
        forbidden.append(input())
    for i in range(P):
        new = []
        for j in range(len(S)):
            new.append('0' + S[j])
            new.append('1' + S[j])
        new.sort(key=lambda x: calculate_complains(x, preferences))
        S = new[:M + 1]
    for s in S:
        if s not in forbidden:
            print(f'Case #{test_case}: {calculate_complains(s, preferences)}')
            break
