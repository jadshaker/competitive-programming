n = int(input())
cards = input().split()
for i in range(0, n):
	cards[i] = int(cards[i])
turn = True
s = 0	# turn = True
d = 0	# turn = False
while len(cards) > 0:
	if cards[0] > cards[-1]:
		if turn == True:
			s += cards[0]
			del cards[0]
			turn = False
		else:
			d += cards[0]
			del cards[0]
			turn = True
	else:
		if turn == True:
			s += cards[-1]
			del cards[-1]
			turn = False
		else:
			d += cards[-1]
			del cards[-1]
			turn = True
print(s, d)
