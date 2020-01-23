def solution(string):
    string_list = []
    for char in string:
        string_list.append(char)
        
    string_list.sort()
    string_list.reverse()
    
    return ''.join(string_list)