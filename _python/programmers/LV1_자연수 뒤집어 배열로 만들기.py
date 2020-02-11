def solution(n):
    return [ int(char) for char in str(n)[::-1]]


"""
[참고]
# def digit_reverse(n):
    return list(map(int, reversed(str(n))))
"""