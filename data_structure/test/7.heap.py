class Heap:
    def __init__(self, data):
        pass

    def insert(self, data):
        pass

def heap_insert_test():
    heap = Heap(15)
    heap.insert(10)
    heap.insert(8)
    heap.insert(5)
    heap.insert(4)
    heap.insert(20)
    print(heap.heap_array)


def heap_test():
    heap = Heap(15)
    heap.insert(10)
    heap.insert(8)
    heap.insert(5)
    heap.insert(4)
    print(heap.heap_array)
    print("=== 힙 20 추가 ===")
    heap.insert(20)
    print(heap.heap_array)
    print("=== 힙 pop ===")
    print("pop:", heap.pop())
    print(heap.heap_array)
    print("=== 힙 pop ===")
    print("pop:", heap.pop())
    print(heap.heap_array)
    print("=== 힙 pop ===")
    print("pop:", heap.pop())
    print(heap.heap_array)


# 1. 힙에 데이터 넣는거 테스트
# heap_insert_test()

# 2. 힙 테스트
# heap_test()
