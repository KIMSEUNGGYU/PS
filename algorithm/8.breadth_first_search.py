def bfs(graph, start_point):
    visited, need_visit = [], []
    
    need_visit.append(start_point)  # 맨 처음에 어디서부터 시작하는지 지정.

    while need_visit:               # need_visit 배열에 데이터가 없다면 모두 탐색했다고 판단.
        node = need_visit.pop(0)    # queue 처럼 인식하기 위해 0 번째 인덱스를 꺼냄
        
        if node not in visited:             # node가 방문하지 않았다면
            visited.append(node)            # 방문했다고 처리하고 
            need_visit.extend(graph[node])  # 방문해야할 리스트에 원소들 추가

    return visited
                
def test_bfs():
    print("=== bfs ===")

    graph = {}
    graph['A'] = ['B', 'C']
    graph['B'] = ['A', 'D']
    graph['C'] = ['A', 'G', 'H', 'I']
    graph['D'] = ['B', 'E', 'F']
    graph['E'] = ['D']
    graph['F'] = ['D']
    graph['G'] = ['C']
    graph['H'] = ['C']
    graph['I'] = ['C', 'J']
    graph['J'] = ['I']

    print('BFS:', bfs(graph, 'A'))      #  ['A', 'B', 'C', 'D', 'G', 'H', 'I', 'E', 'F', 'J']
    print()




test_bfs()