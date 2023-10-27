s = input().split(" ")

for i, word in enumerate(s):
    if(i == len(s) - 1): print(word[::-1], end="")
    else: print(word[::-1], end=" ")