n, m = tuple(map(int, input().split()))
a = list(map(int, input().split()))

def get_answer():
    global m
    sum = 0

    while m:
        sum += a[m - 1]
        if (m % 2 == 0):
            m //= 2
        else:
            m -= 1
    
    return sum

print(get_answer())