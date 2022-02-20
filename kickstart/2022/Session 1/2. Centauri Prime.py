T = int(input())
for t in range(1, T + 1):
    kingdom = input()
    if kingdom[-1].lower() in ['a', 'e', 'i', 'o', 'u']:
        print(f'Case #{t}: {kingdom} is ruled by Alice.')
    elif kingdom[-1].lower() == 'y':
        print(f'Case #{t}: {kingdom} is ruled by nobody.')
    else:
        print(f'Case #{t}: {kingdom} is ruled by Bob.')
