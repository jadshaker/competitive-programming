s = input()
if s.count('h'):
	s = s[s.index('h') + 1:]
	if s.count('e'):
		s = s[s.index('e') + 1:]
		if s.count('l'):
			s = s[s.index('l') + 1:]
			if s.count('l'):
				s = s[s.index('l') + 1:]
				if s.count('o'):
					print('YES')
					exit()
print('NO')
