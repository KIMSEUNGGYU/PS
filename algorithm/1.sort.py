import random

# 버블 정렬
def bubble_sort(data):
    for index in range(len(data) - 1):
        swap = False # 성능 개선

        for index2 in range(len(data) - index - 1):
            # 앞 데이터가 뒤 데이터보다 크면 swap
            if data[index2] > data[index2+1]:
                data[index2], data[index2+1] = data[index2+1], data[index2]
                swap = True

        if swap == False:   # 한 턴 돌때 swap 이 안된다면 이미 정렬이 되었다는 의미
            break

    return data

# 삽입 정렬
def insert_sort(data):
    for index in range(len(data)-1):
        for index2 in range(index + 1, 0, -1):
            # 이전 데이터가 더 크면 swap
            if data[index2] < data[index2 - 1]:
                data[index2], data[index2-1] = data[index2-1], data[index2]
            else:   # 이전 데이터가 작으면 (이미 정렬되어 있는 경우)
                 break
    return data


# 선택 정렬
def select_sort(data):
    for standard in range(len(data)-1):
        lowest_index = standard
        for index2 in range(standard+1, len(data)):
            # 최소값보다 현재 데이터가 작으면 
            if data[index2] < data[lowest_index]:
                lowest_index = index2

        data[standard], data[lowest_index] = data[lowest_index], data[standard]

    return data


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
test_select_sort()        # 선택 정렬 테스트