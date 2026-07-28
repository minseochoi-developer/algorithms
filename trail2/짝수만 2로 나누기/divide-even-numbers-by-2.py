n = int(input())
arr = list(map(int, input().split()))

def even_divide(arr):
    for i in range(n):
        if (arr[i] % 2 == 0):
            arr[i] //= 2

even_divide(arr)
for elem in arr:
    print(elem, end=" ")