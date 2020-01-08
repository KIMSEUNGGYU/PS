def solution(array, commands):
    answer = []
    
    for command in commands:
        start, end, index = command
        
        split_list = array[start-1:end]
        sorted_list = sorted(split_list)
        answer.append(sorted_list[index-1])
        
    return answer