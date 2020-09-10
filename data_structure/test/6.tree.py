import random


class Node:
    def __init__(self):
        pass


class BST:
    def __init__(self):
        pass

    def insert(self):
        pass

    def search(self):
        pass

    def delete(self):
        pass


def base_test():
    bst = BST(1)
    bst.insert(2)
    bst.insert(3)
    bst.insert(0)
    bst.insert(4)
    bst.insert(8)

    print("search 1:", bst.search(1))
    print("search 2:", bst.search(2))
    print("search 3:", bst.search(3))
    print("search -1:", bst.search(-1))


# 2
def bst_test():
    bst_nums = set()
    # 0 ~ 999 중, 100개의 숫자 랜덤 선택
    while len(bst_nums) != 100:
        bst_nums.add(random.randint(0, 999))

    # 선택된 100개의 숫자를 이진 탐색 트리에 입력, 임의로 루트 노드는 500을 넣음
    bst = BST(500)
    for num in bst_nums:
        bst.insert(num)

    # 입력한 100개의 숫자 검색 (검색 기능 확인)
    for num in bst_nums:
        if bst.search(num) == False:
            print('search failed:', num)

    # 입력한 100개의 숫자 중 10개의 숫자를 랜덤 선택
    delete_nums = set()
    bst_nums = list(bst_nums)
    while len(delete_nums) != 10:
        delete_nums.add(bst_nums[random.randint(0, 99)])

    for delete_num in delete_nums:
        if bst.delete(delete_num) == False:
            print('deleted failed', delete_num)
        else:
            print('deleted', delete_num)


# base_test()       # 1
bst_test()        # 2
