def dfs(graph, start_point):
    visited, need_visit = [], []
    
    need_visit.append(start_point)  # 맨 처음에 어디서부터 시작하는지 지정.

    while need_visit:               # need_visit 배열에 데이터가 없다면 모두 탐색했다고 판단.
        node = need_visit.pop()     # stack 처럼 인식하기 위해 마지막 원소를 꺼냄
        
        if node not in visited:             # node가 방문하지 않았다면
            visited.append(node)            # 방문했다고 처리하고 
            need_visit.extend(graph[node])  # 방문해야할 리스트에 원소들 추가

    return visited
                
def dfs_left(graph, start_point):
    visited, need_visit = [], []
    
    need_visit.append(start_point)

    while need_visit:              
        node = need_visit.pop()     
        
        if node not in visited:           
            visited.append(node)           
            need_visit.extend(reversed(graph[node]))        # rever 기능 추가

    return visited
                

def test_dfs():
    print("=== dfs ===")

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

    print('DFS:', dfs(graph, 'A'))          #  ['A', 'C', 'I', 'J', 'H', 'G', 'B', 'D', 'F', 'E']
    print()

def test_dfs_left_first():
    print("=== dfs left ===")

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

    print('DFS:', dfs_left(graph, 'A'))     #  ['A', 'B', 'D', 'E', 'F', 'C', 'G', 'H', 'I', 'J']           
    print()





# test_dfs()                # 노드의 오른쪽 자식노드부터 dfs 수행
test_dfs_left_first()     # 노드의 왼쪽 자식노드부터 dfs 수행