def sequential_search():
    pass

def sequential_search_index():
    pass

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



test_sequential_search()
test_sequential_search_index()