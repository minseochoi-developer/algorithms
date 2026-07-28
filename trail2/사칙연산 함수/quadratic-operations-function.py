a, o, c = input().split()
a = int(a)
c = int(c)

def plus(a, c):
    return a + c

def minus(a, c):
    return a - c

def divide(a, c):
    return a // c

def multiple(a, c):
    return a * c

if (o == '+'):
    print(a, "+", c, "=", plus(a, c))
elif (o == '-'):
    print(a, "-", c, "=", minus(a, c))
elif (o == '/'):
    print(a, "/", c, "=", divide(a, c))
elif (o == '*'):
    print(a, "*", c, "=", multiple(a, c))
else:
    print("False")