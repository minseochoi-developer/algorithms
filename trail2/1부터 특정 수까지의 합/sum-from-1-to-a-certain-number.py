n = int(input())

# Please write your code here.
def divide_10(n):
    sum = 0
    for i in range(1, n + 1):
        sum += i
    return sum // 10

print(divide_10(n))