def solution(month, day):
    answer = ''
    
    day_word = ['FRI', 'SAT', 'SUN', 'MON', 'TUE', 'WED', 'THU']
    days = [0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
    
    total = 0
    
    for i in range(month):
        total += days[i]
    
    total += day -1
    total %= 7
    print(total)
    answer = day_word[total]
    
    return answer