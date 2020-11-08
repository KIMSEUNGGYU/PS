def sequential_search(data_list, searched_data):
    # 데이터가 존재하는지 안하는지 확인하는 함수
    for data in data_list:
        if data == searched_data:
            return True
        
    return False

def sequential_search_index(data_list, searched_data):
    # 데이터가 존재하면 해당 index를 존재하지 않으면 -1 를 반환
    for index in range(len(data_list)):
        if data_list[index] == searched_data:
            return index
    
    return -1

def test_sequential_search():
    print("=== sequential search ===")
    data_list = [69, 17, 25, 19, 9, 75, 30, 21, 43, 48]
    print("69:", sequential_search(data_list, 69))      # true
    print("10:", sequential_search(data_list, 10))      # false
    print("100:", sequential_search(data_list, 100))    # false
    print("25:", sequential_search(data_list, 25))      # true
    print()

def test_sequential_search_index():
    print("=== sequential search index ===")
    data_list = [69, 17, 25, 19, 9, 75, 30, 21, 43, 48]
    print("69 index:", sequential_search_index(data_list, 69))      # 0
    print("10 index:", sequential_search_index(data_list, 10))      # -1
    print("100 index:", sequential_search_index(data_list, 100))    # -1
    print("25 index:", sequential_search_index(data_list, 25))      # 2
    print()



# test_sequential_search()
# test_sequential_search_index()