def qsort(data):
    # quick sort for 문으로 설명!
    if len(data) <= 1:
        return data
    
    left, right = [], []
    pivot = data[0]

    for index in range(1, len(data)):
        if pivot > data[index]:
            left.append(data[index])
        else:
            right.append(data[index])
    
    return qsort(left) + [pivot] + qsort(right)


def qsort2(data):
    # quick sort list complihention 으로 설명

    # 0. pivot 은 정렬을 하기 위한 기준점으로, 여기서는 리스트의 맨 처음 원소(data[0]) 으로 지정
    # 1. 퀵소트는 기준점(pivot) 을 기준으로 작으면 left 배열 / 크면 right 에 배열을 추가함.
    # 2. 1 과정을 재귀 호출로 반복. (가장 잘게 쪼개 질때까지)
    # 3. 제일 작은 단위로 쪼개지면 데이터들을 합치는데 이때 left + [pivot] + right 로 합친다.
    #    결국에는 qsort(left) 가 잘게 쪼개질때까지 반복 후 pivot 을 합친 후 right 를 잘게 쪼갠후 합침?

    if len(data) <= 1:
        return data

    pivot = data[0]

    left = [item for item in data[1:] if pivot > item]
    right = [item for item in data[1:] if pivot <= item]

    return qsort2(left) + [pivot] + qsort2(right)


def test_qsort():
    print("=== quick sort ===")
    import random
    data = random.sample(range(100), 10)
    print("before sort:", data)
    print("after sort:", qsort(data))
    print()


def test_qsort2():
    print("=== quick sort2 ===")
    import random
    data = random.sample(range(100), 10)
    print("before sort:", data)
    print("after sort:", qsort2(data))
    print()


test_qsort()
test_qsort2()