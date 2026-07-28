text = input()
pattern = input()

def is_substr(start_idx):
    m = len(pattern)

    for j in range(m):
        if text[start_idx + j] != pattern[j]:
            return False
    return True

def find_index():
    n, m = len(text), len(pattern)
    for i in range (n - m + 1):
        if is_substr(i):
            return i
    return -1

print(find_index())