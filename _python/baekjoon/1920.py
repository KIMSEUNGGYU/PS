'''
[내 풀이] - 시간 초과

N, N_lst = int(input()), list(map(int, input().split()))
M, M_lst = int(input()), list(map(int, input().split()))

for m in M_lst:
    if m in N_lst:
        print(1)
    else:
        print(0)
'''

# 좋은 코드 - 딕셔너리로 함으로서 시간복잡도 처리 효율 굿굿굿!!
N, A = int(input()), {i:1 for i in map(int, input().split())}
M, M_lst = int(input()), list(map(int, input().split()))

for m in M_lst:
    print(A.get(m, 0))

'''
[참고]

N, A = int(input()), {i:1 for i in map(int, input().split())}
M = input()

for i in list(map(int, input().split())):
    # print(A[i]) # error , 파이썬의 딕셔너리는 없는 값을 따로 출력하지 않음.
    print(A.get(i, 0)) # get 메소드는 딕셔너리 값에서 등록이 되지 않는 값들을 default 값(두번째 매개변수) 으로 설정해서 출력 가능

    # 또 다른 방법
    # print(1 if i in A else 0) # 삼항 연산자 형태
'''
