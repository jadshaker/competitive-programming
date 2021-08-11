def func(string):
	sum = 0
	for i in string:
		sum += int(i)
	if len(str(sum)) > 1:
		return func(str(sum))
	return sum

a = input()
print(func(a))
