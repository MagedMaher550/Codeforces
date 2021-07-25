n , m = map(int, input().split())
if m == 1 and n == 1:
    print(1)
elif m == n/2 or m < n/2:
    print(m + 1)
else:
    print(m - 1)
