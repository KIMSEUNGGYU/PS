def solution(x):
    lst = [int(char) for char in str(x)]
    _sum = sum(lst)

    if x % _sum == 0:
        return True

    return False


"""
[참고]
def Harshad(n):
    # n은 하샤드 수 인가요?
    return n % sum([int(c) for c in str(n)]) == 0
"""

"""
[내 코드에 적용]
def solution(x):
    return x % sum([int(char) for char in str(x)]) == 0
"""