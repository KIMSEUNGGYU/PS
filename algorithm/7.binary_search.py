def binary_search(data_list, searched_data):
    print(data_list)
    if len(data_list) == 1 and data_list[0] == searched_data:
        return True
    if len(data_list) == 1 and data_list[0] != searched_data:
        return False
    if len(data_list) == 0: # 방어 코드
        return False

    medium = len(data_list) // 2
    if searched_data == data_list[medium]:
        return True
    else:
        if searched_data > data_list[medium]:   # 찾고자 하는 데이터(searched_data) 가 더 크면 기준(medium)이후에 데이터에서 탐색
            return binary_search(data_list[medium:], searched_data)
        else:   # 찾고자하는 값이 더 작으면 기준(medium) 보다 작은값에서 찾기
            return binary_search(data_list[:medium], searched_data)


def test_binary_search():
    print("=== binary search ===")
    import random
    data_list = random.sample(range(100), 10)
    data_list.sort()
    print("7 search:", binary_search(data_list, 7))
    print("84 search:", binary_search(data_list, 84))
    print("39 search:", binary_search(data_list, 39))
    print()

def test_binary_search2():
    print("=== binary search ===")
    import random
    data_list = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
    data_list.sort()
    print("7 search:", binary_search(data_list, 7))
    print("84 search:", binary_search(data_list, 84))
    print("39 search:", binary_search(data_list, 39))
    print()

# test_binary_search()
# test_binary_search2()
