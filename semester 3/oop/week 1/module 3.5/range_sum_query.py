q = int(input().split(" ")[1])

arr = [int(i) for i in input().split(" ")]

pre = []

for i, num in enumerate(arr):
    if(i == 0): pre.append(num)
    else: pre.append(num + pre[i - 1])
    

while(q > 0):
    lr = input().split(" ")
    l = int(lr[0])
    r = int(lr[1])
    
    l -= 1
    r -= 1
    
    if(l > 0): print(pre[r] - pre[l - 1])
    else: print(pre[r])
    
    q -= 1