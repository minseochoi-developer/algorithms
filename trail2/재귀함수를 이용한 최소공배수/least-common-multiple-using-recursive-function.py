n = int(input())
arr = list(map(int, input().split()))

def get_gcd(a, b):
    if b == 0:
        return a
    
    return get_gcd(b, a % b)

def get_lcm_two(a, b):
    return (a * b) // get_gcd(a, b)

def get_lcm_array(n):
    if n == 0:
        return arr[0]
    
    return get_lcm_two(arr[n], get_lcm_array(n - 1))

print(get_lcm_array(n-1))