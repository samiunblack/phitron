numbers = [10, 20, 25, 30, 35]

sum = 0

for num in numbers:
    print(num, end=" ")
    sum += num

print(f'\n{sum}')

for i in range(1, 10):
    print(i, end=" ")
    
print()
    
for i in range(1, len(numbers)):
    print(i, numbers[i])