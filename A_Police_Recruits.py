n = int(input())
e = list(map(int, input().split()))

police = 0
crime = 0

for x in e:
    if x > 0:
        police += x
    else:
        if police > 0:
            police -= 1  
        else:
            crime += 1   

print(crime)