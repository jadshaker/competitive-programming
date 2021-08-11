x = input()
y = input()
l = max(len(x), len(y))
dx = len(x) - l
dy = len(y) - l
for i in range(l):
    vn = '0'
    if dx + i >= 0:
        vn = x[dx + i]
    vm = '0'
    if dy + i >= 0:
        vm = y[dy + i]
    if vn < vm:
        print("<")
        exit()
    else:
        if vn > vm:
            print(">")
            exit()
print("=")
