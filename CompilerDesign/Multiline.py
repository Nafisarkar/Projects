string = input()

start = False
end = False
single = False

for x in range(len(string) - 1):
    if string[x] == "/" and string[x + 1] == "/":
        single = True
    if string[x] == "/" and string[x + 1] == "*":
        start = True
    if string[x] == "*" and string[x + 1] == "/":
        end = True

if start == True and end == True:
    print("Multi line comment")
elif single == True:
    print("Single line comment")
else:
    print("Not a comment")
