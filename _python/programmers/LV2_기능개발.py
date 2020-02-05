def _sum(progresses, speeds):
    return [sum(z) for z in zip(progresses, speeds)]


def solution(progresses, speeds):
    answer = []
    index = 0

    while index < len(progresses):
        if progresses[index] >= 100:
            count = 0

            for i in range(index, len(progresses)):
                if progresses[i] < 100:
                    break

                count += 1
                index += 1

            answer.append(count)
        progresses = _sum(progresses, speeds)
    return answer


'''
[다른 풀이]
def solution(progresses, speeds):
    answer = []
    days = [0 for i in range(len(progresses))]
    for i in range(len(progresses)):
        day = 0
        while progresses[i] < 100:
            progresses[i] += speeds[i]
            day += 1
        days[i] = day
    
    _max = days[0]
    cnt = 0
    while len(days):
        if _max >= days[0]:
            cnt += 1
        else:
            answer.append(cnt)
            cnt = 1
            _max = days[0]
        days.pop(0)
    
    answer.append(cnt)
    return answer

'''

