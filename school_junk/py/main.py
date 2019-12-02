# Python example

a = 3
b = 5

def swap(a, b, temp):
    temp = a
    a = b
    b = temp
    del temp
    pass
    
swap(a, b, temp)