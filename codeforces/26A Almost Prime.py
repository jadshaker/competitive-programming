def prime_factors(n):
	i = 2
	count = 0
	while n > 1:
		u = n % i == 0
		if u:
			while n > 1:
				n /= i
				if n % i > 0:
					break
		if i == 3:
			i += 2
		else:
			i += 1
		if u:
			count += 1
			if count > 2:
				return False
	return count == 2


s = 0
for i in range(6, int(input()) + 1):
	s += prime_factors(i)
print(s)
