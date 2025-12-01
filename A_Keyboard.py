keys = "qwertyuiopasdfghjkl;zxcvbnm,./"

direction = input()
text = input()

result = ""

for char in text:
    index = keys.find(char)

    if direction == 'R':
        result += keys[index - 1]
    else:
        result += keys[index + 1]

print(result)