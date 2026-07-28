a, b = tuple(map(int, input().split()))

def power(a, b):
    cnt = 1
    for _ in range(b):
        cnt *= a
    return cnt
    
print(power(a, b))