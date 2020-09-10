class Heap:
    def __init__(self, data):
        self.heap_array = []
        self.heap_array.append(None)
        self.heap_array.append(data)

    def move_up(self, inserted_index):
        # 최상위 루트라면 False
        # 현재노드(inserted) 가 부모 노드보다 크면 True, 그렇지 않으면 False
        if inserted_index <= 1:  # 조건 1
            return False

        parented_index = inserted_index // 2  # 부모 노드의 인덱스 구함
        # 현재노드가 부모 노드 보다 크면 True 반환
        if self.heap_array[inserted_index] > self.heap_array[parented_index]:  # 조건 2
            return True
        else:
            return False

    def insert(self, data):
        # 1. 기본적인 데이터 삽입
        if len(self.heap_array) == 0:
            self.heap_array.append(None)
            self.heap_array.append(data)
            return True
        self.heap_array.append(data)

        # 2. 데이터가 추가된 후 알맞은 위치 찾기
        inserted_index = len(self.heap_array) - 1  # -1 하는 이유는 힙을 배열로 구현할때 1부터
        while self.move_up(inserted_index):
            parented_index = inserted_index // 2   # 부모 인덱스 찾음

            # 데이터 swap
            self.heap_array[parented_index], self.heap_array[inserted_index] = self.heap_array[inserted_index], self.heap_array[parented_index]
            inserted_index = parented_index  # 인덱스 변경, 또 움직일 수 있는지 판단하기 위해

    def move_down(self, popped_index):
        # popped_index 가 상대적으로 부모 노드임.
        left_child_index = popped_index * 2               # 왼쪽 자식노드
        right_child_index = popped_index * 2 + 1          # 오른쪽 자식노드

        # 1. 왼쪽 자식노드가 없는 경우 (자식 노드가 둘 다 없는 경우)
        if left_child_index >= len(self.heap_array):
            return False
        # 2. 오른쪽 자식노드가 없는 경우 (왼쪽 자식 노드만 있는 경우)
        elif right_child_index >= len(self.heap_array):
            if self.heap_array[left_child_index] > self.heap_array[popped_index]:  # 자식노드가 더 크면
                return True
            else:
                return False
        # 3. 자식노드가 모두 (왼/오) 있는 경우
        else:
            # 왼/오 중 더 큰 값을 찾기 (비교)
            if self.heap_array[left_child_index] > self.heap_array[right_child_index]:  # 왼쪽이 더 큰 경우
                # 왼쪽 자식과 부모 노드를 비교해서 자식 노드가 더 크면 swap
                if self.heap_array[left_child_index] > self.heap_array[popped_index]:
                    return True
                else:
                    return False
            else:  # 오른쪽이 더 큰 경우
                # 오른쪽 자식과 부모 자식을 비교해서 오른쪽 자식이 더 크면 swap
                if self.heap_array[right_child_index] > self.heap_array[popped_index]:
                    return True
                else:
                    return False

    def pop(self):
        if len(self.heap_array) <= 1:  # 1 인 이유는 0번째에 None 값이 들어가 있음.
            return None

        returned_data = self.heap_array[1]  # 최상위에 있는 데이터 가져옴.
        self.heap_array[1] = self.heap_array[-1]  # 최하위 데이터를 최상위 데이터로 이동
        del self.heap_array[-1]  # 맨 마지막 노드 삭제
        popped_index = 1    # 최하위가 최상위로 이동했으므로, 최상위부터 최하위까지 swap 이 필요한지 찾아야함.

        while self.move_down(popped_index):
            left_child_index = popped_index * 2
            right_child_index = popped_index * 2 + 1

            # 1. 1인 경우는 해당 값이 오지도 않음. 그래서 해당 구문 필요치 않음 (move_down)
            # 2. 오른쪽 노드가 없는 경우 (왼쪽만 있는 경우 )
            if right_child_index >= len(self.heap_array):
                # 자식이 부모보다 크면 swap
                if self.heap_array[left_child_index] > self.heap_array[popped_index]:
                    self.heap_array[left_child_index], self.heap_array[popped_index] = self.heap_array[popped_index], self.heap_array[left_child_index]
                    popped_index = left_child_index

            # 3. 자식 모두 있는 경우
            else:
                # 왼쪽 자식이 큰 경우
                if self.heap_array[left_child_index] >= self.heap_array[right_child_index]:
                    # 부모보다 자식이 더 크면
                    if self.heap_array[left_child_index] > self.heap_array[popped_index]:
                        self.heap_array[left_child_index], self.heap_array[popped_index] = self.heap_array[popped_index], self.heap_array[left_child_index]
                        popped_index = left_child_index
                # 오른쪽 자식이 큰 경우
                else:
                    # 부모보다 자식이 더 크면
                    if self.heap_array[right_child_index] > self.heap_array[popped_index]:
                        self.heap_array[right_child_index], self.heap_array[popped_index] = self.heap_array[popped_index], self.heap_array[right_child_index]
                        popped_index = right_child_index

        return returned_data        # 최상위 데이터 반환


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
heap_test()
