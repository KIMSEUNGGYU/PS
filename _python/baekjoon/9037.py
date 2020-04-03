def check(N, candy):
    for i in range(N):
        if  candy[i] % 2 == 1:
            candy[i] += 1

    # 모든 수가 같은지 check
    return len(set(candy)) == 1

def teacher(N, candy):
    tmp_lst = [0 for i in range(N)]
    for idx in range(N):
        if candy[idx] % 2: # 캔디에 나머지 값이 홀수면,
            candy[idx] += 1
        candy[idx] //= 2
        tmp_lst[(idx+1)%N] = candy[idx]

    for idx in range(N):
        candy[idx] += tmp_lst[idx]
    return candy


def process():
    N, candy = int(input()), list(map(int, input().split()))
    cnt = 0
    while not check(N, candy):
        cnt += 1
        candy = teacher(N, candy)
        # 전역 변수를 사용하는 것을 추천
    print(cnt)

for i in range(int(input())):
    process()