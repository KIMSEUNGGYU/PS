def solution(phone_number):
    length = len(phone_number) - 4
    return '*' * length + phone_number[length:]


"""
[참고]
def hide_numbers(s):
    return "*"*(len(s)-4) + s[-4:]
"""

"""
[내 코드에 적용]
def solution(phone_number):
    return '*'*(len(phone_number)-4) + phone_number[-4:]
"""