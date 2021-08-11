n = int(input())
a = list(map(int, input().split()))
x = a.count(5)
if a.count(0) == 0:
    print(-1)
elif x < 9:
    print(0)
else:
    print(f"{'5' * 9 * (a.count(5) // 9)}{'0' * a.count(0)}")
