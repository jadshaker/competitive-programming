input = open('consecutive_cuts_chapter_2_input.txt', 'r').readline
print = open('consecutive_cuts_chapter_2_output.txt', 'w').write

T = int(input())
for t in range(1, T + 1):
    possible = True
    n, k = map(int, input().split())
    a = input()
    a = a[:-1] + ' ' + a[:-1]
    b = input()[:-1]
    if k == 0:
        for i in range(n):
            if a[i] != b[i]:
                possible = False
    elif k == 1:
        possible = False
        for i in range(0, n, 2):
            if a[i] != b[i]:
                possible = True
    if not possible:
        print(f"Case #{t}: NO\n")
        continue
    if n == 2:
        possible = False
        if k % 2 == 0:
            if a[0] == b[0] and a[2] == b[2]:
                possible = True
        else:
            if a[0] == b[2] and a[2] == b[0]:
                possible = True
        if possible:
            print(f"Case #{t}: YES\n")
        else:
            print(f"Case #{t}: NO\n")
        continue
    if b in a:
        print(f"Case #{t}: YES\n")
    else:
        print(f"Case #{t}: NO\n")
