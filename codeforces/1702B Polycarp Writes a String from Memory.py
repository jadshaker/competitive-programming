def assignment(s: str) -> list[str]:
    chars = []
    for c in s:
        if c not in chars:
            chars.append(c)
        if len(chars) == 3:
            return chars
    return chars


t = int(input())
for _ in range(t):
    s = input()
    d = 1
    if len(s) < 4:
        print(1)
        continue
    chars = assignment(s)
    for i in range(len(s)):
        c = s[i]
        if c not in chars:
            chars = assignment(s[i:])
            d += 1
    print(d)
