def full_name(first, last):
    return f'{first} {last}'

def famous_name(first, last, **kargs):
    name = f'{kargs["title"]} {first} {last}'
    
    for key, value in kargs.items():
        print(key, value)
    
    return name


print(famous_name("Munir", "Chowdhury", title="Dr.", deg1="MBBS", deg2="FCPS"))


name = full_name(last="Rockstar", first="Jhankar")
print(name)