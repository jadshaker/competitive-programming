m = input().split()
n = int(m[0])
m = int(m[1])
while n > 0:
	pixels = input().split()
	if 'C' in pixels or 'M' in pixels or 'Y' in pixels:
		print('#Color')
		exit()
	n += -1
print('#Black&White')
