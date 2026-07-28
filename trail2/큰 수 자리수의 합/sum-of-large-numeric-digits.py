a, b, c = map(int, input().split())

# Please write your code here.
def get_answer(n):
    if n < 10:
        return n
    
    return get_answer(n // 10) + n % 10

print(get_answer(a * b * c))