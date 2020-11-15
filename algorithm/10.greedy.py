def min_coin_count(value, coin_list):
    total_coin_count = 0

    coin_list.sort(reverse=True)        # 가장 큰 수(500)부터 처리하기 위한 작업
    
    for coin in coin_list:
        coin_num = value // coin
        total_coin_count += coin_num
        value -= coin_num * coin
    
    return total_coin_count


def get_max_value(capacity, data_list):
    data_list = sorted(data_list, key=lambda x: x[1] / x[0], reverse=True)      # 각 단계의 최적의 방법을 위한 정렬, 가치/무게 를 기준으로 잡고 내림차순으로 정렬

    total_value = 0

    for data in data_list:
        if capacity - data[0] >= 0:                 # 남은 용량 - 데이터의 무게가 >= 0 이면
            capacity -= data[0]
            total_value += data[1]                  # 가치를 그만큼 더함
        else:   
            fraction = capacity / data[0]           # 수용할 수 있는 용량만큼 넣기 위해 남은 부분(fraction) 구함.
            total_value += data[1] * fraction        # 남은 부분과 비례하는 value 를 넣음
            # capacity -= data[0]                   # 은 생략 가능 (왜냐하면 break 로 반복문을 멈추기 때문에)
            break
    
    return total_value




def test_coin_problem():
    # 동전 문제
    # 지불해야 하는 값이 4720 원 일때, 1, 50, 100, 500 원 동전으로 동전의 수가 가장 적에 지불하는 방법.

    print("=== coin problem ===")
    coin_list = [1, 50, 100, 500]
    print("4720:", min_coin_count(4720, coin_list))         # 31
    print()

def test_fkp():
    # 부분 배낭 문제
    # 무게 제한이 k 인 배낭에 최대 가치를 가지도록 물건을 넣는 문제
    # (무게(W), 가치(V))

    # [(10, 10), (15, 12), (20, 10), (25, 8), (30, 5)]

    print("=== FKP (부분 배낭 문제) ===")
    data_list = [(10, 10), (15, 12), (20, 10), (25, 8), (30, 5)]
    print("30:", get_max_value(30, data_list))              # 24.5
    print()





# exe
test_coin_problem()
test_fkp()
