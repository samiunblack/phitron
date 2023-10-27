n = input()

n = [int(i) for i in input().split(" ")]

nums = {}

for num in n:
    if(num not in nums):
        nums[num] = 0
    
    nums[num] += 1
    
tot = 0

for key, val in nums.items():
    if(val > key):
        tot += val - key
    elif(val < key): tot += val   
        
print(tot)