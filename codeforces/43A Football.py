n = int(input())
teams = []
for i in range(n):
    teams.append(input())
team1 = 0
team2 = 0
for goal in teams:
    if goal == teams[0]:
        team1 += 1
    else:
        team2 += 1
if team1 > team2:
    print(teams[0])
else:
    for team in teams:
        if team != teams[0]:
            print(team)
            break
