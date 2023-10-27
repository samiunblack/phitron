s = input()

l = r = 0

li = []

i = j = 0

for c in s:
    if(c == 'L'):
        l += 1
    else:
        r += 1
    
    j += 1    
        
    if(l == r):
        li.append(s[i:j])
        i = j
        l = r = 0
        
print(len(li))

for word in li:
    print(word)