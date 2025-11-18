def maksimal(a, b):
    if a > b:
        return a
    else:
        return b

def minimal(a, b):
    if a < b:
        return a
    else:
        return b

n = int(input())

maks = -10**9
minim = 10**9

numbers = list(map(int, input().split()))
for nilai in numbers:
    maks = maksimal(maks, nilai)
    minim = minimal(minim, nilai)

print(maks, minim)
