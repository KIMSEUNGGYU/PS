# merge sort

def merge(left, right):
    merged = []
    left_index, right_index = 0, 0

    # 1. 왼쪽, 오른쪽 모두 정렬이 안된 경우
    while len(left) > left_index and len(right) > right_index:
        if left[left_index] > right[right_index]:
            merged.append(right[right_index])
            right_index += 1
        else:
            merged.append(left[left_index])
            left_index += 1
    
    # 2. 왼쪽 배열에 원소가 남아 있는 경우 (오른쪽이 모두 정렬된 경우)
    while len(left) > left_index:
        merged.append(left[left_index])
        left_index += 1
    
    # 3. 오른쪽 배열에 원소가 남아 있는 경우 (왼쪽이 모두 정렬된 경우)
    while len(right) > right_index:
        merged.append(right[right_index])
        right_index += 1

    return merged

    

def merge_split(data):
    # 해당 함수가 merge_sort 
    # 1. data 를 받고 독립적인 원소로 split (독립적일때까지 split)
    # 2. data 1단계가 끝날 경우 (독립적인 원소들만 남는 경우) 병합하는 단계를 수행한다. 

    if len(data) <= 1:
        return data
    
    # 1 단계 (split 단계)
    medium = int(len(data) / 2)
    left = merge_split(data[:medium])
    right = merge_split(data[medium:])

    # 2 단계 (merge 단계)
    return merge(left, right)

def test_merge_sort():
    import random
    data_list = random.sample(range(100), 10)

    print("=== merge sort ===")
    print("before:", data_list)
    print("after:", merge_split(data_list))


test_merge_sort()