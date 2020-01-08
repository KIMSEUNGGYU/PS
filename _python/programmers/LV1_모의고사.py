def solution(answers):
    answer = []
    player1 = [1, 2, 3, 4, 5, 1, 2, 3, 4, 5]
    player2 = [2, 1, 2, 3, 2, 4, 2, 5]
    player3 = [3, 3, 1, 1, 2, 2, 4, 4, 5, 5]
    
    count1 = 0
    count2 = 0
    count3 = 0
    for index, an in enumerate(answers):
        index %= 10
        if player1[index] == an:
            count1 += 1
        if player3[index] == an:
            count3 += 1
    
    for index, an in enumerate(answers):
        index %= 8
        if player2[index] == an:
            count2 += 1
        
    
    # print(count1, count2, count3)
    if count1 > count2 and count1 > count3:
        answer.append(1)
    elif count2 > count1 and count2 > count3:
        answer.append(2)
    elif count3 > count1 and count3 > count2:
        answer.append(3)

    else:
        if count1 == count2 and count1 == count3:
            answer.append(1)
            answer.append(2)
            answer.append(3)
        elif count1 == count2:
            answer.append(1)
            answer.append(2)
        elif count1 == count3:
            answer.append(1)
            answer.append(3)
        elif count2 == count3:
            answer.append(2)
            answer.append(3)
    
        
    print(answer)
        
    return answer