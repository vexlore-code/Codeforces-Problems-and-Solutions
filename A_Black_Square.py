a = list(map(int, input().split()))
s = input()

total = 0
for c in s:
    index = int(c) - 1
    total += a[index]

print(total)