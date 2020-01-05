def solution(s):
    min_zip_length = len(s)         # 최소길이
    
    # 절반만 해도 됨 
    # 문자열 길이가 N일 때, 길이가 N/2 보다 크게 잘랐을 때는 길이가 줄지 않음. 
    # 따라서 1 ~ N/2 길이로 자르는 방법을 모두 탐색한 후 그중 가장 짧은 방법을 선택하면 됨
    for index in range(1, len(s) // 2 + 1):
        output = ''                 # 압축한 문자열
        compare_str = s[0:index]    # 비교 문자열
        zip_cnt = 1                 # 압축률
        
        # index 개 씩 증가 - index 개의 글자씩 잘라서 비교
        for j in range(index, len(s) + 1, index):
            # 압축할 문자열과 같은 문자열이 나오는 경우 압축률 증가
            if compare_str == s[j:j+index]:
                zip_cnt += 1
            # 압축률과 압축문자열을 output에 추가
            else:
                output += f"{zip_cnt if zip_cnt > 1 else ''}{compare_str}"
                compare_str = s[j:j + index]
                zip_cnt = 1
                
        # 마지막 비교 문자열을 더해준다
        output += compare_str
        
        # 최소 길이 update
        if min_zip_length > len(output):
            min_zip_length = len(output)
    
    answer = min_zip_length
    return answer