n, m = tuple(map(int, input().split()))
a = [0] + list(map(int, input().split()))

def get_sum(a1, a2):
    sum = 0
    for i in range(a1, a2+1):
        sum += a[i]
    return sum

for i in range(m):
    a1, a2 = tuple(map(int, input().split()))
    print(get_sum(a1, a2))
