c = 0
p = []
for s, t in zip(input(), input()):
    if s != t:
        p += [t if c else s]
        c = 1 - c
    else:
        p += [s]
print('impossible' if c else ''.join(p))
