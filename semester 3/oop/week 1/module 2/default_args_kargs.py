def sum(x, y, z = 0):
    return x + y + z


def all_sum(*args):
    sum = 0
    
    for num in args:
        sum += num

    return sum


print(sum(10, 20, 30))
print(sum(10, 20))

print(all_sum(10, 20, 30, 40))