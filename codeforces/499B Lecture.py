n, m = map(int, input().split())
words = {}
for i in range(m):
    s = input().split()
    words[s[0]] = s[1]
lecture = input().split()
for word in lecture:
    if len(words[word]) < len(word):
        print(words[word], end=' ')
    else:
        print(word, end=' ')
print()
