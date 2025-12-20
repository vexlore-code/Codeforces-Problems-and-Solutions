n = int(input())

h = 0
while True:
    need = h * (h + 1) * (h + 2) // 6
    if need > n:
        break
    h += 1

print(h - 1)
