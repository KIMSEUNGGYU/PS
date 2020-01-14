def solution(arr):
    answer = []
    
    compare_number = arr[0]
    answer.append(arr[0])
    
    for i in range(1, len(arr)):
        if compare_number != arr[i]:
            answer.append(arr[i])
            compare_number = arr[i]
    
    return answer