n , s , ans = int(input()) , input() , ""
for i in range(n):
    if (n-i)%2 == 0:
        ans = s[i] + ans
    else:
        ans += s[i]

print(ans)    
