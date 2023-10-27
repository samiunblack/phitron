numbers = [45, 87, 65, 43, 85, 14, 26, 61]
odds = [num for num in numbers if num % 2 == 1 and num % 5 == 0]

print(odds)

players = ['messi', 'ronaldo', 'neymer']
ages = [34, 38, 30]


age_comb = [[players[i], ages[i]] for i in range(0, len(players))]
print(age_comb)