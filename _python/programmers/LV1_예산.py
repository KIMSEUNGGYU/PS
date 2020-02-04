def solution(d, budget):
    answer = 0
    d.sort()
    for money in d:
        budget -= money
        if budget < 0:
            break
        answer += 1
    return answer


'''
[참고]
def solution(d, budget):
    d.sort()
    while budget < sum(d):
        d.pop()
    return len(d)
'''
'''
[참고] - 설명
해당 경우 sort() 를 O ( n log n )이라하고 
while 문 안에 sum 이 있기에 O(n^2) 이 된다고 생각한다.
'''

'''
[내 코드의 적용]
def solution(d, budget):
    d.sort()
    _sum = sum(d)
    while budget < _sum:
        money = d.pop()
        _sum -= money
    
    return len(d)
'''
'''
[내 코드의 적용] - 설명
해당 경우 sort() 를 O(n log n) 이고, 
while 문 밖에 sum 이 있고 그 이후에는 가장 큰 값들을 특정 기준으로 빼기 때문에 O(n) 이라 생각든다.
따라서 정렬할때 시간복잡도가 가장 크기 때문에 O(n log n) 이라 생각된다.

'''