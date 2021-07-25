n = int(input())
def checkWinner(n):
    players = {}
    winnerPlayer , maxScore , count = "" , 0 , 0
    for i in range(n):
        data = input()
        name , score = data[:data.find(' ')] , int(data[data.find(' '):])
        if count == 0:
            winnerPlayer =  name
        
        if name not in players:
            players[name] = [score, count]
        else:
            players[name] = [players[name][0]+score, count]
            
        if count > 0 and players[name][0] > maxScore or (count > 0 and players[name][0] == maxScore  and players[name][1] < players[winnerPlayer][1]):
            winnerPlayer = name
            
        if players[name][0] > maxScore:
            maxScore = players[name][0]            
        count += 1
            
    return winnerPlayer
    
print(checkWinner(n))