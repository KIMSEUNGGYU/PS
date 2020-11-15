def min_coin_count():
    pass

def get_max_value():
    pass


def test_coin_problem():
    # 동전 문제
    # 지불해야 하는 값이 4720 원 일때, 1, 50, 100, 500 원 동전으로 동전의 수가 가장 적에 지불하는 방법.

    print("=== coin problem ===")
    coin_list = [1, 50, 100, 500]
    print("4720:", min_coin_count(4720, coin_list))
    print()

def test_fkp():
    # 부분 배낭 문제
    # 무게 제한이 k 인 배낭에 최대 가치를 가지도록 물건을 넣는 문제
    # (무게(W), 가치(V))

    # [(10, 10), (15, 12), (20, 10), (25, 8), (30, 5)]

    print("=== FKP (부분 배낭 문제) ===")
    data_list = [(10, 10), (15, 12), (20, 10), (25, 8), (30, 5)]
    print("30:", get_max_value(30, data_list))
    print()





# exe
test_coin_problem()
test_fkp()
