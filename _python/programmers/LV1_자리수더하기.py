def solution(n):
    string_number = str(n)
    sum = 0
    for number in string_number:
        sum += int(number)

    return sum

"""
[참고]

def sum_digit(number):
    return sum([int(i) for i in str(number)])
"""