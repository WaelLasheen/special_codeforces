import math

def solve(a, b, c):
    discriminant = b * b - 4 * a * c
    root1 = (-b + math.sqrt(discriminant)) / (2 * a)
    root2 = (-b - math.sqrt(discriminant)) / (2 * a)
    if root2 > 0:
        return root2
    return root1

# main
t = int(input())
while t != 0:
    suma = 0
    p2_sum = 0
    n, c = map(int, input().split())  # Separate and convert n and c into integers
    si = list(map(int, input().split()))  # Input split by space
    suma = sum(si)  # Calculate sum of elements in si
    p2_sum = sum(x**2 for x in si)  # Calculate sum of squares of elements in si

    print(int(solve(4 * n, 4 * suma, p2_sum - c)))

    t -= 1
    