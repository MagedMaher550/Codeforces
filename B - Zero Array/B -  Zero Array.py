n = int(input())
list = [int(i) for i in input().split()]
list.sort()
list.reverse()
print(list , "\n\n\n")
i = 0

while i < len(list):
    print(list)
    if len(list) == 1 or len(list) == 0:
        break

    j = i+1
    if len(list) < 1 :
        break

    if list[i] == list[j]:
        list.pop(i)
        list.pop(i)
        i -= 1

    else:
        while(list[i] != 0):
            list[i] -= list[j]
            rem = list.pop(j)

            if list[i] == 0:
                list.pop(i)

            elif list[i] < 0 :
                rem = abs(list[i])
                list[i] += rem
                list.insert(j , rem)

    i += 1





print()
print()
print('YES' if len(list) == 0 else 'NO')
