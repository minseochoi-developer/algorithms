n = int(input())

def f(n):
    if n == 1:
        return n
    if n == 2:
        return n
    
    return f(n - 2) + n

print(f(n))