t = int(input())

while(t > 0):
    prompt = [int(x) for x in input().split(" ")]
    prompt.sort()
    
    x = prompt[0]
    y = prompt[1]
    
    print(sum([i for i in range(x + 1, y) if i % 2 == 1]))
    
    t -= 1