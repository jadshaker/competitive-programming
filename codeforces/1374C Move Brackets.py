for _ in range(int(input())):
    n = int(input())
    s = input()
    open = 0
    close = 0
    count = 0
    for c in s:
        if c == '(':
            open += 1
        else:
            close += 1
        if close > open:
            count += 1
            close -= 1
    print(count)
