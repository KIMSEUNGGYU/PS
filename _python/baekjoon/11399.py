'''
N, p_list = int(input()), list(map(int, input().split()))

waiting_time = [0 for i in range(len(p_list))]
p_list.sort()

_sum = 0
for index, time in enumerate(p_list):
    _sum += time
    waiting_time[index] = _sum

print(sum(waiting_time))
'''


N, numbers = int(input()), list(map(int, input().split()))
numbers.sort()
i_sum, min_sum = 0, 0
for i in range(N):
    min_sum += (i_sum + numbers[i]) #3
    i_sum += numbers[i] #4

print(min_sum)


"""
def solution(progresses, speeds):
    answer = []
    days = [0 for i in range(len(progresses))]
    for i in range(len(progresses)):
        day = 0
        while progresses[i] < 100:
            progresses[i] += speeds[i]
            day += 1
        days[i] = day
    
    base_index = 0    
    cnt = 1
    for i in range(1, len(days)):
        if days[base_index] > days[i]:
            cnt += 1
        else:
            answer.append(cnt)
            cnt = 0
            base_index = i
    answer.append(cnt)
    print(answer)
    
    return answer
    """