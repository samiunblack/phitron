def return_a_lot(x, y, z):
    return x * 2, y * 2, z * 2


print(type(return_a_lot(1, 2, 3)))


doubles = return_a_lot(2, 3, 4)

for x in doubles:
    print(x)