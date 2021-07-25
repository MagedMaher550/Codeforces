n = int(input())
j , k , mod = 1 , 1 , 1000000007

for i in range(1 , n+1):
    j = (j * 27) % mod
    k = (k * 7) % mod

    if (j - k < 0):
        j += mod

print( (j-k) % mod )