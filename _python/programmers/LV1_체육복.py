def solution(n, lost, reserve):
    answer = 0
    flag_list = list([1 for i in range(n+1)])

    for index in lost:
        flag_list[index-1] -= 1
    
    for index in reserve:
        flag_list[index-1] += 1
    
    for index, data in enumerate(flag_list):
        if index == 0 and data >= 2 and flag_list[index+1] == 0:
            flag_list[index] -= 1
            flag_list[index+1] += 1
        elif index == n-1 and data >= 2 and flag_list[index-1] == 0:
            flag_list[index] -= 1
            flag_list[index-1] += 1
        else:
            if data >= 2 and flag_list[index-1] == 0:
                flag_list[index] -= 1
                flag_list[index-1] += 1
            elif data >=2 and flag_list[index+1] == 0:
                flag_list[index] -= 1
                flag_list[index+1] += 1

        
    sum = 0
    for i in range(n):
        if flag_list[i] >= 1:
            sum += 1
    
    answer = sum
    return answer