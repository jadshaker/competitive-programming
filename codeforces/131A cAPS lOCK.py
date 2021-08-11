s = input()
print(s.upper() if len(s) == 1 and s.islower() else s.lower() if s.isupper() else s.lower().capitalize() if s[1:].isupper() else s)
