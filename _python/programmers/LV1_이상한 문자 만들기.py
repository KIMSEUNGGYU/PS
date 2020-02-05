def solution(s):
    answer = ''
    string_list = s.split(' ')

    for string in string_list:
        for index, char in enumerate(string):
            if (index) % 2 == 0:
                answer += char.upper()
            else:
                answer += char.lower()

        answer += ' '
    return answer[:-1]

"""
[참고]
def toWeirdCase(s):
    # 함수를 완성하세요
    return ' '.join([''.join([c.upper() if i % 2 == 0 else c.lower() for i, c in enumerate(w)]) for w in s.split()])
"""