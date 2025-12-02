t = int(input())
for _ in range(t):
    a, b, c, d = map(int, input().split())
    
    cond = (min(a, b) < c < max(a, b)) ^ (min(a, b) < d < max(a, b))
    
    if cond:
        print("YES")
    else:
        print("NO")
