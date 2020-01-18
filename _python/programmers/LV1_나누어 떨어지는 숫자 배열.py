
def solution(arr, divisor):
    answer = []
    arr.sort()
    
    for data in arr:
        if data % divisor == 0:
            answer.append(data)
            
    if len(answer) == 0:
        answer.append(-1)
        
    
    return answer