class Node:
    def __init__(self):
        pass


class LinkedList:
    def __init__(self):
        pass

    def add(self):
        pass

    def desc(self):
        pass

    def delete(self):
        pass

    def search_node(self):
        pass


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

    print("링크드 리스트 100 데이터 찾기")
    node100 = linked_list.search_node(100)
    print(node100 and node100.data)


test_linked_list()
