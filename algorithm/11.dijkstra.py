import heapq

def dijstra(graph, start):

    ## 초기화
    distances = {node: float('inf') for node in graph}
    distances[start] = 0
    queue = []
    heapq.heappush(queue, [distances[start], start])        # 첫번째는 시작노드의 거리(0), 노드("A") 


    # current_distance, current_node = heapq.heappop(queue)       # distance(0), current_node("A")
    # print(current_distance, current_node)

    while queue:    # 우선 순위 큐에 데이터가 없으면 모두 탐색했다고 판단 
        current_distance, current_node = heapq.heappop(queue)       # distance(0), current_node("A")

        ## skip 하는 부분 (우선순위 큐 특성상 뒤로 가면 갈수록 할필요 없는 데이터들이 존재함.)
        if distances[current_node] < current_distance:              # 저장되어 있는 distance 가 우선순위 큐에서 나온 노드의 거리보다 작으면 수행 업데이트 과정 skip
            continue

        ## 업데이트가 필요한지 안필요한지 판단후 그에 따른 역할 수행
        for adjacent_node, weight in graph[current_node].items():
            distance = current_distance + weight            # 인접노드의 거리 (우선순위 큐에서 꺼낸 노드의 거리 + 인접노드의 거리)

            if distance < distances[adjacent_node]:         # 업데이트 된 인접노드의 거리가, 기록되어 있는 노드의 거리보다 작으면 업데이트
                distances[adjacent_node] = distance
                heapq.heappush(queue, [distance, adjacent_node])
    

    return distances



def test_dijstra():
    print("=== dijstar ===")
    graph = {
        'A': {'B':8, 'C':1, 'D':2 },
        'B': { },
        'C': {'B':5, 'D':2 },
        'D': {'E':3, 'F':5 },
        'E': {'F':1 },
        'F': {'A':5 }
    }

    print("A:", dijstra(graph, 'A'))                    # A: {'A': 0, 'B': 6, 'C': 1, 'D': 2, 'E': 5, 'F': 6}
    print()


test_dijstra()