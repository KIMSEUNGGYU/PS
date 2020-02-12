def solution(n):
    result = list([char for char in str(n)])
    result.sort(reverse=True)
    return int(''.join(result))


"""
[참고]
def solution(n):
    ls = list(str(n))
    ls.sort(reverse = True)
    return int("".join(ls))
"""