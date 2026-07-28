n = int(input())
arr = list(map(int, input().split()))

# Please write your code here.
def max_value(n):
    if n == 0:
        return arr[0]
    
    return max(max_value(n - 1), arr[n])

print(max_value(n - 1))