n = int(input())

# Please write your code here.
def get_answer(n):
    if n == 1:
        return 1
    
    return n + get_answer(n - 1)

print(get_answer(n))