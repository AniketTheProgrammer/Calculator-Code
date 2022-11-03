def cal(a , b , c):
    if b=='+':
        return (a+c)
    elif b=='-':
        return (a-c)
    elif b=='*':
        return (a*c)
    elif b=='/':
        return (a/c)
    else:
        return 0
    

print("Hello.......")
a = int(input())
b = input()
c = int(input())
result = cal(a , b , c)
print("------")
print(result)
while True:
    b = input()
    c = int(input())
    result = cal(result , b , c)
    print("------")
    print(result)