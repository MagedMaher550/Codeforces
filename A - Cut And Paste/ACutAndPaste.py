t = int(input())
for i in range(t):
    x = int(input())
    s = input()
    l , c , ans = 0 , "" , 0
    while l !=  x:
        l += 1                 
        c , s = s[l:] , s[ :l]  
        s += c*int(s[l-1])
        
    print(len(s)%(10**9+7))