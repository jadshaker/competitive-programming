for case in range(int(input())):
    n = int(input())
    s = ' ' + input()
    count = 0
    print(f'Case #{case + 1}:', end=' ')
    for i in range(1, n + 1):
        if s[i] > s[i - 1]:
            count += 1
        else:
            count = 1
        print(count, end=' ')
    print()
