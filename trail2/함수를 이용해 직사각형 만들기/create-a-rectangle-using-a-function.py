row_num, col_num = map(int, input().split())

# Please write your code here.
def print_stars(n, m):
    for _ in range(n):
        print("1" * m)

print_stars(row_num, col_num)