n = int(input())
sections , Max = [int(i) for i in input().split()] , 0
 
for i in range(n):
    count = 1
    section = sections[i]
    
    for j in range(i-1,0,-1):
        if sections[j] <= section:
            count += 1
        else:
            break
            
    for w in range(i+1,n):
        if sections[w] <= section:
            count += 1
        else:
            break
        
    if Max < count:
        Max = count
 
print(Max-1 if Max-1>0 else 1)