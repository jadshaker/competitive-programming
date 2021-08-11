x = input().split()

n = int(x[0])
l = int(x[2]) * int(x[1])
d = int(x[4]) * int(x[3])
p = int(x[5])
nl = int(x[6])
np = int(x[7])

nl = int(l / nl)
np = int(p / np)
print(int(min(nl, np, d) / n))
