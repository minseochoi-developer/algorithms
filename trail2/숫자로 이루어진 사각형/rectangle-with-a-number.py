n = int(input())

# Please write your code here.
def print_rect(num):
    cnt = 1
    for _ in range(num):
        for _ in range(num):
            print(cnt, end=" ")
            cnt += 1
            if cnt == 10:
                cnt = 1
        print()

print_rect(n)
