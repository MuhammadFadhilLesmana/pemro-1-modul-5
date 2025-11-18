def reverse(x):
    result = 0
    while x > 0:
        result = result * 10 + x % 10
        x //= 10
    return result

A, B = map(int, input().split())

A = reverse(A)
B = reverse(B)
C = A + B
print(reverse(C))
