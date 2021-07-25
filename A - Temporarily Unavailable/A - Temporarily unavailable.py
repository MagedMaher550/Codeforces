t = int(input())
for i in range(t):
    a , b , c , r = map(int, input().split())
    
    if a > b:
        a , b = b , a
    if (b == a) or (c >= b and c-r <= a) or (c <= a and c+r >= b) or (c >= a and c <= b and c+r >=b and c-r <= a):
        print(0)
    elif(c > b and c-r >= b) or (c < a and c+r <= a):
        print(b-a)    
    elif c >= b:
        print(c - a - r)
    elif c <= a:
        print(b - r - c)
    elif c >= a and c <= b and c-r >= a and c+r <= b:
        print(b - a - 2*r)
    elif c >= a and c <= b and c-r < a and c+r <= b:
        print(b - c - r)
    elif c >= a and c <= b and c-r >= a and c+r > b:
        print(c - a - r)
        