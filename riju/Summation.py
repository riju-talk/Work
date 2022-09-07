def f(n):
    return n

def s(n):
    value = 0
    for k in range(1, n+1):
        value =  f(k) + value
    return value

g=int(input())

print(s(g))