n = int(input())
a = list(map(int, input().split()))
mx = max(a)
print(sum(mx - x for x in a))
