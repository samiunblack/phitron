t = int(input())

while(t > 0):
    n = input()
    for i in range(len(n) - 1, -1, -1):
        print(n[i], end=" ")
    
    print()
    
    t -= 1