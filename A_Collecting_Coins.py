t = int(input())
for _ in range(t):
    a, b, c, n = map(int, input().split())

    total = a + b + c + n
    mx = max(a, b, c)

    if total % 3 == 0 and total // 3 >= mx:
        print("YES")
    else:
        print("NO")
