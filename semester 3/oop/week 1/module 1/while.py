i = 0

while(i < 10):
    if i == 8:
        break
    i += 1
    if i % 2 == 0:
        continue
    print(i, end=" ")
    