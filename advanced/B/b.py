h, x = map(int, input().split())

sum = 0

for i in range(0, h):
    c = int(input())
    sum = sum + (c *(x **(i+1))) % (10**9 + 7)
result = sum % (10**9 + 7)
print(result)