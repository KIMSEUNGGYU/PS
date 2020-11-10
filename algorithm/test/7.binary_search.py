def binary_search(data_list, searched_data):
    pass


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
