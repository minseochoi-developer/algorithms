m, d = tuple(map(int, input().split()))

def is_date(m, d):
    if (m == 1 or m == 3 or m == 5 or m == 7 or m == 8 or m == 10 or m == 12):
        if (d >= 1 and d <= 31):
            return True
    elif (m == 2):
        if (d >= 1 and d <= 28):
            return True
    elif (m == 4 or m == 6 or m == 9 or m == 11):
        if (d >= 1 and d <= 30):
            return True
    return False

if (is_date(m, d)):
    print("Yes")
else:
    print("No")
        