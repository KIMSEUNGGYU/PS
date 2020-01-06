def solution(participant, completion):
    answer = ''
    
    participant = sorted(participant)
    completion = sorted(completion)
    
    for i, player in enumerate(completion):
        if participant[i] != player:
            answer = participant[i]
            return answer
    
    if answer == '':
        answer = participant[-1]
    
    return answer