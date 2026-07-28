a, b = tuple(map(int, input().split()))

def is_sum_even(num):
    sum = 0
    while num > 0:
        sum += num % 10
        num //= 10
    
    if sum % 2 == 0:
        return True
    else:
        return False

def is_prime(num):
    if num == 1:
        return False

    for i in range(2, num):
        if (num % i == 0):
            return False
    return True

cnt = 0
for i in range(a, b+1):
    if (is_prime(i) and is_sum_even(i)):
        cnt += 1

print(cnt)