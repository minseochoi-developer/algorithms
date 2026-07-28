a, b = tuple(map(int, input().split()))

def is_prime(num):
    for i in range(2, num):
        if num % i == 0:
            return False
    return True

sum = 0
for i in range(a, b+1):
    if (is_prime(i)):
        sum += i

print(sum)