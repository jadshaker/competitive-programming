n = int(input())
b = [0] + sorted([int(x) for x in input().split()])
print(* [b[i + 1] - b[i] for i in range(n)])
