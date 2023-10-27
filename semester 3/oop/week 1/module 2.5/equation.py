arr = [int(i) for i in input().split()]

sum = 0

for i in range(2, arr[1], 2):
    sum += arr[0] ** i
    
print(sum)