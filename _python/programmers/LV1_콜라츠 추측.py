def solution(num):
    LIMIT_COUNT = 500
    count = 0

    if num == 1:
        return count

    while True:
        count += 1
        if num % 2 == 0:
            num //= 2
        else:
            num = num * 3 + 1

        if count > LIMIT_COUNT:
            return -1
        if num == 1:
            return count


    return answer

"""
[참고]

def collatz(num):
    for i in range(500):
        num = num / 2 if num % 2 == 0 else num*3 + 1
        if num == 1:
            return i + 1
    return -1
"""

"""
[내풀이로 적용]
def solution(num):
    LIMIT_COUNT = 500
    
    if num == 1: 
        return 0
    
    for index in range(LIMIT_COUNT):
        num = num // 2 if num % 2 == 0 else num * 3 + 1
        if num == 1:
            return index+1
    
    return -1
"""