'''
[완성]
'''
def sort_base(datas):
    return datas[1]

def solution(N, stages):
    denominator = len(stages)
    failure_rate = []
    for step in range(1, N+1):
        if denominator != 0:
            count = stages.count(step)
            failure_rate.append((step, count / denominator))
            denominator -= count
        else:
            failure_rate.append((step, 0))

    failure_rate.sort(key=sort_base, reverse=True)
    return [fail[0] for fail in failure_rate]

'''
[1차 풀이] - 70 점
'''
'''
def sort_base(datas):
    return datas[1]

def solution(N, stages):
    answer = []

    count = 0
    total = len(stages)
    failure_rate = []
    for step in range(1, N+1):
        count = stages.count(step)
        failure_rate.append((step, count / total))
        total -= count

    failure_rate.sort(key=sort_base, reverse=True)

    for index, fail_rate in failure_rate:
        answer.append(index)
    return answer
'''


'''
[참고 코드] # object 사용 한게 좋은듯, lambda 함수도 굿굿굿

def solution(N, stages):
    result = {}
    denominator = len(stages)
    for stage in range(1, N+1):
        if denominator != 0:
            count = stages.count(stage)
            result[stage] = count / denominator
            denominator -= count
        else:
        result[stage] = 0
    
    return sorted(result, key=lambda x : result[x], reverse=True)
'''