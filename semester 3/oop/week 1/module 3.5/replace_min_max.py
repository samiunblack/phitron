n = input()
arr = [int(i) for i in input().split(" ")]

id1 = arr.index(max(arr))
id2 = arr.index(min(arr))

arr[id1], arr[id2] = arr[id2], arr[id1]

for num in arr:
    print(num, end=" ")