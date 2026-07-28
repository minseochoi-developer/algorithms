y = int(input())

def yoon_year(y):
    if (y % 4 != 0 or y % 100 == 0 and y % 400 != 0):
        return False
    return True

if (yoon_year(y)):
    print("true")
else:
    print("false")
