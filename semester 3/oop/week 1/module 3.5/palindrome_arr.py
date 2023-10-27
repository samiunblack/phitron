n = input()
arr = [int(i) for i in input().split(" ")]

if(arr == arr[::-1]):
    print("YES")
else:
    print("NO")