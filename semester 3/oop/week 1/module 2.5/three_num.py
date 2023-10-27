case = [int(i) for i in input().split(" ")]

k = case[0]
s = case[1]

cnt = 0

for x in range(k + 1):
    for y in range(k + 1):
        z = s - x - y
        if(0 <= z and z <= k):
            cnt += 1
                

print(cnt)