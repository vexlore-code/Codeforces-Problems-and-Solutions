n = int(input())
police = 0
crime = 0

for i in range(n):
    x = int(input())
    if x > 0:
        police += x
    else:
        if (police < 1):
            crime += 1
        else:
            police -= 1

print(crime)