for _ in range(int(input())):
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    my_list = []
    for i in range(n):
        my_list.append([a[i], b[i]])
    my_list.sort(key=lambda x: x[0])
    for lst in my_list:
        if k >= lst[0]:
            k += lst[1]
        else:
            break
    print(k)
