def solution(arr):
    arr.remove(min(arr))
    return len(arr) == 0 and [-1] or arr

"""
[참고]

"""