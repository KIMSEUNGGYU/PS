def solution(n):
    sqrt = (n ** 0.5)

    if sqrt % 1 == 0:
        return pow(int(sqrt)+1, 2)
    else:
        return -1



"""
[참고]
def nextSqure(n):
    return n == int(n**.5)**2 and int(n**.5+1)**2 or 'no'
    
[내 코드의 적용]
def solution(n):
    sqrt = (n ** 0.5)
    return sqrt % 1 == 0 and pow(int(sqrt)+1, 2) or -1
"""