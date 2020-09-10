import random

# 버블 정렬
def bubble_sort():
    pass

# 삽입 정렬
def insert_sort():
    pass

# 선택 정렬
def select_sort():
    pass


def test_bubble_sort():
    data_list = random.sample(range(100), 50)
    print("Data:", data_list)
    print("bubble sort:", bubble_sort(data_list))

def test_insert_sort():
    data_list = random.sample(range(100), 50)
    print("Data:", data_list)
    print("insert sort:", insert_sort(data_list))

def test_select_sort():
    data_list = random.sample(range(100), 50)
    print("Data:", data_list)
    print("select sort:", select_sort(data_list))


# test_bubble_sort()        # 버블 정렬 테스트
# test_insert_sort()        # 삽입 정렬 테스트
# test_select_sort()        # 선택 정렬 테스트