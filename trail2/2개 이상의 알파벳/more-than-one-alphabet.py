A = input()

def is_more_two(string):
    for i in range(len(string)):
        if string[i] != string[0]:
            return True
    return False

if(is_more_two(A)):
    print("Yes")
else:
    print("No")
