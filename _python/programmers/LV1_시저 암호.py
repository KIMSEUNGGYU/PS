"""
실수
영어 알파벳 갯수는 26개
"""
def solution(s, n):
    answer = ''
    for char in s:
        result = ord(char) + n
        if char.islower():
            if result > 122:
                result -= 26
            answer += chr(result)
        elif char.isupper():
            if result > 90:
                result -= 26
            answer += chr(result)
        else:
            answer += ' '
    return answer