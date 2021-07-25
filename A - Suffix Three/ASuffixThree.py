t = int(input())

for i in range(t):
    s = input()
    if s[len(s)-2:] == "po":
        print("FILIPINO")
    elif s[len(s)-4:] == "desu" or s[len(s)-4:] == "masu":
        print("JAPANESE")
    elif s[len(s)-5:] == "mnida":
        print("KOREAN")
        