y, m, d = tuple(map(int, input().split()))

def is_yoon_year():
    if (y % 4 != 0 or y % 100 == 0 and y % 400 != 0):
        return False
    return True

def is_date():
    if (m == 2):
        if (is_yoon_year()):
            if (d >= 1 and d <= 29):
                return True
        else:
            if (d >= 1 and d <= 28):
                return True
    elif (m == 1 or m == 3 or m == 5 or m == 7 or m == 8 or m == 10 or m == 12):
        if (d >= 1 and d <= 31):
            return True
    elif (m == 4 or m == 6 or m == 9 or m == 11):
        if (d >= 1 and d <= 30):
            return True
    
    return False
    

def get_season():
    if (is_date() == False):
        return "-1"
    
    if (m >= 3 and m <= 5):
        return "Spring"
    elif (m >= 6 and m <= 8):
        return "Summer"
    elif (m >= 9 and m <= 11):
        return "Fall"
    else:
        return "Winter"

print(get_season())