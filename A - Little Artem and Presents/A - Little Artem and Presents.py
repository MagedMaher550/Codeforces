n = int(input())
if n%3 == 0:
    n = n // 3 * 2
else:
    n = n//3 * 2 + 1
print(n)