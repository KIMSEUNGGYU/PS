'''
링크드 리스트

1. 노드 클래스 구현
2. 데이터 추가
3. 데이터 출력
'''

# 1. 노드 구현


class Node:
    def __init__(self, data, next=None):
        self.data = data
        self.next = next


# 링크드 리스트 구현
class LinkedList:
    def __init__(self, data):
        self.head = Node(data)

    def add(self, data):
        if self.head == '':
            self.head = Node(data)
        else:
            node = self.head
            while node.next:
                node = node.next
            node.next = Node(data)

    def desc(self):
        node = self.head
        while node.next:
            print(node.data)
            node = node.next
        print(node.data)

    def delete(self, data):
        if self.head == "":
            print("링크드 리스트가 존재하지 않습니다.")
            return

        if self.head.data == data:      # 삭제하는 데이터가 head 노드의 데이터라면
            head = self.head            # 현재 head 노드를 변수에 저장
            self.head = head.next       # head 노드를 현재 head 노드의 다음 노드로 변경
            del head                    # 기존의 head 노드 삭제
        else:
            node = self.head
            while node.next:
                if node.next.data == data:
                    temp_node = node.next
                    node.next = node.next.next
                    del temp_node
                else:
                    node = node.next

    def search_node(self, data):
        node = self.head
        while node:
            if node.data == data:
                return node
            else:
                node = node.next


# 더블 링크드 리스트 구현
class DoubleLinkedList:
    def __init__(self, data):
        pass


def test_node():
    node1 = Node(1)
    node2 = Node(2)

    head = node1
    node1.next = node2


def test_linked_list():
    linked_list = LinkedList(0)

    print("링크드 리스트 추가")
    for data in range(1, 10):
        linked_list.add(data)
    linked_list.desc()
    print("링크드 리스트 4 데이터 삭제")
    linked_list.delete(4)
    linked_list.desc()

    print("링크드 리스트 5 데이터 찾기")
    node5 = linked_list.search_node(5)
    print(node5 and node5.data)


# test_node()               # 1
# test_linked_list()        # 2
'''
더블 링크드 리스트 학습 해야함
'''
