def merge():
    pass
    

def merge_split():
    pass

def test_merge_sort():
    import random
    data_list = random.sample(range(100), 10)

    print("=== merge sort ===")
    print("before:", data_list)
    print("after:", merge_split(data_list))


test_merge_sort()