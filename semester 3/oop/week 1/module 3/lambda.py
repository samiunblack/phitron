def double(x):
    return x * 2

doubled = lambda num : num * 2

print(doubled(44))

add = lambda x, y : x + y

print(add(11, 33))

nums = [10, 20, 30, 40, 50]
doubled_nums = list(map(doubled, nums))
print(doubled_nums)