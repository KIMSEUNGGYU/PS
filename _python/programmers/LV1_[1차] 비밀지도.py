# 파이썬 문법 참고
## 리스트 컴프리헨션에서 if - else 문 사용 https://doorbw.tistory.com/174

def get_binary(number, n):
    # 방법 1 - 2진수 구하기
    binary_list = []

    while True:
        number, mod = divmod(number, 2)
        binary_list.append(mod)
        if number == 0:
            break

    while len(binary_list) < n:
        binary_list.append(0)

    binary_list.reverse()
    return binary_list

def decrypt(row_list1, row_list2, n):
    ''' 복호화 과정
    겹쳤을때 하나라도 1이 있을 경우(or) 1
    그렇지 않으면 0
    '''
    row_list = []
    for i in range(n):
        row_list.append(bool(row_list1[i]) | bool(row_list2[i]))
    return ['#' if data == True else ' ' for data in row_list]

def solution(n, arr1, arr2):
    answer = []
    for i in range(n):
        answer.append(''.join(decrypt(get_binary(arr1[i], n), get_binary(arr2[i], n), n)))
    return answer


'''
[참고]
def solution(n, arr1, arr2):
    answer = []
    for index in range(0,n):
        answer.append(str(bin(arr1[index] | arr2[index] | pow(2,n))).replace("0b1","").replace("1","#").replace("0"," "))

    return answer
'''