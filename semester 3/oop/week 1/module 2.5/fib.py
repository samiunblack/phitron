t = int(input())

arr = [0, 1]

for i in range(2, t):
    arr.append(arr[i - 1] + arr[i - 2])
    
for i in range(0, t):
    print(arr[i], end=" ")