import random


class Node:
    def __init__(self, value):
        self.value = value
        self.left = None
        self.right = None


class BST:
    def __init__(self, value):
        self.root = Node(value)

    def insert(self, value):
        self.current_node = self.root

        while True:
            if value < self.current_node.value:
                if self.current_node.left != None:
                    self.current_node = self.current_node.left
                else:
                    self.current_node.left = Node(value)
                    break
            else:
                if self.current_node.right != None:
                    self.current_node = self.current_node.right
                else:
                    self.current_node.right = Node(value)
                    break

    def search(self, value):
        self.current_node = self.root

        while self.current_node:  # 무한 loop 조심
            if self.current_node.value == value:
                return True
            elif value < self.current_node.value:
                self.current_node = self.current_node.left
            else:
                self.current_node = self.current_node.right

        return False

    def delete(self, value):
        # 0. 삭제할 노드가 있는 지 탐색 (current_node: 삭제할 노드, parent_node: 삭제할 노드의 부모 노드)
        searched = False  # 탐색됐는지 안됐는지 판단하는 구문
        self.current_node = self.root
        self.parent_node = self.root  # 작업을 처리할때 부모 노드를 이용해야하므로 변수로 지정

        while self.current_node:
            if self.current_node.value == value:
                searched = True
                break
            elif value < self.current_node.value:
                self.parent_node = self.current_node
                self.current_node = self.current_node.left
            else:
                self.parent_node = self.current_node
                self.current_node = self.current_node.right

        if searched == False:
            return False

        # 실제적으로 삭제하는 부분 (이후부터 Case 들을 분리해서 코드 작성)
        # 1. current_node 가 leaf 노드 인 경우
        if self.current_node.left == None and self.current_node.right == None:
            if value < self.current_node.value:     # 왼쪽 브랜치 연결 삭제
                self.current_node.left = None
            else:                                   # 오른쪽 브랜치 연결 삭제
                self.current_node.right = None
            del self.current_node

        # 2. current_node 가 하나의 자식노드를 가질 경우
        # 2.1. 왼쪽 자식 노드를 가질 경우
        if self.current_node.left != None and self.current_node.right == None:
            # current 노드가 부모 노드보다 작은 경우
            if value < self.parent_node.value:
                self.parent_node.left = self.current_node.left
            # current 노드가 부모 노드보다 큰 경우
            else:
                self.parent_node.right = self.current_node.left
        # 2.2. 오른쪽 자식 노드를 가질 경우
        elif self.current_node.left == None and self.current_node.right != None:
            if value < self.parent_node.value:
                self.parent_node.left = self.current_node.right
            else:
                self.parent_node.right = self.current_node.right

        # 3 current_node 가 두 개의 자식 노드를 가질 경우
        elif self.current_node.left != None and self.current_node.right != None:
            # 3.1 삭제할 노드가 왼쪽에 있는 경우
            if value < self.current_node.value:
                self.change_node = self.current_node.right  # 오른쪽 자식 중에서 가장 작은 값을 위로 올려야 함
                self.change_node_parent = self.current_node.right
                # 작업할때 change 노드의 부모 노드가 필요함.

                while self.change_node.left != None:  # 가장 작은 값을 만날때까지 순회
                    self.change_node_parent = self.change_node  # change 노드의 부모노드 재정의
                    self.change_node = self.change_node.left    # change 노드 재정의
                if self.change_node.right != None:              # change 노드의 오른쪽 자식노드가 있으면
                    self.change_node_parent.left = self.change_node.right   # change 노드의 부모노드와 연결
                else:
                    self.change_node_parent.left = None         # change 노드의 부모노드와 연결 끊음

                # 가장 작은 노드를 위로 올리는 작업 (current 노드와 연결되어있던 정보들과 연결하는 작업)
                self.parent_node.left = self.change_node
                self.change_node.left = self.current_node.left
                self.change_node.right = self.current_node.right
            # 3.2 삭제할 노드가 오른쪽에 있는 경우
            else:
                self.change_node = self.current_node.right
                self.change_node_parent = self.current_node.right

                # 오른쪽 노드 중에서 가장 작은 값을 찾을때까지 순회
                while self.change_node.left != None:
                    self.change_node_parent = self.change_node
                    self.change_node = self.change_node.left

                # 가장 작은 노드의 오른쪽 자식이 있으면 change 노드의 부모 노드와 연결.
                if self.change_node.right != None:
                    self.change_node_parent.left = self.change_node.right
                # 가장 작은 노드의 오른쪽 자식이 없으면 change 노드의 부모 노드와 연결 끊음.
                else:
                    self.change_node_parent.left = None

                # 가장 작은 노드가 삭제할 노드의 역할을 수행
                self.parent_node.right = self.change_node
                self.change_node.left = self.current_node.left
                self.change_node.right = self.current_node.right

        return True


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
