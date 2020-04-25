"""
# 시간초과
def fibonacci(number):
    if number < 2:
        return number
    else:
        return fibonacci(number-1) + fibonacci(number-2)


n = int(input())

print(fibonacci(n))
"""

""" 참고 코드"""
n = int(input())
a, b = 0, 1

while n > 0:
    a, b = b, a + b
    n -=1

print(a)

