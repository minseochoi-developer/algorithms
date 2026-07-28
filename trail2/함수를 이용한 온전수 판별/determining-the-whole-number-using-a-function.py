a, b = tuple(map(int, input().split()))

def is_onjeonsu(num):
    if (num % 2 == 0):
        return False
    
    if (num % 10 == 5):
        return False
    
    if (num % 3 == 0 and num % 9 != 0):
        return False
    
    return True

cnt = 0
for i in range(a, b+1):
    if (is_onjeonsu(i)):
        cnt += 1

print(cnt)
