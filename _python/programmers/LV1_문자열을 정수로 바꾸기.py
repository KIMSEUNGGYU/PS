def solution(s):
    answer = 0
    if s[0] == '-':
        answer = -1 * abs(int(s))
    else:
        answer = int(s)
    return answer

"""
[참고]

def solution(s):
    return int(s)
"""