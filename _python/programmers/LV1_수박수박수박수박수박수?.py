def solution(n):
    ODD_CHAR, EVEN_CHAR = '수', '박'

    answer = ''
    for i in range(1, n+1):
        if i % 2 == 0:
            answer += EVEN_CHAR
        else:
            answer += ODD_CHAR

    return answer

"""
[참고 코드]

def water_melon(n):
    s = "수박" * n
    return s[:n]     
"""