# Python example

a = 3
b = 5
value = 0

def swap(a, b, temp):
    temp = a
    a = b
    b = temp
    del temp
    pass
    
swap(a, b, temp)

def switch_alt_py(value):
    switcher = {
        0 : "false",
        1 : "true"
    }
    return (switcher.get(value, "undefined value"))
    pass