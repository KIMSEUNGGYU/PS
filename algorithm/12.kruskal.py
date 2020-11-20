
# union-find
parent, rank = {}, {}

def find(node):
    # find 작업 - path compression 작업
    if parent[node] != node:                    # 부모 노드가 자신이 아니면 부모 노드 존재
        parent[node] = find(parent[node])       # 재귀적으로 찾으면서, 루트 노드 찾음, 루트 노드를 찾으면 parent[node] 값을 root 노드로 변경
    
    return parent[node]

def union(node_u, node_v):
    # union 작업 - union by rank 작업
    
    # 각각의 노드의 루트 노드 찾기
    root1 = find(node_u)
    root2 = find(node_v)

    # union-by-rank 기법
    if rank[root1] < rank[root2]:           # 랭킹이 더 큰 집합으로 연결
        parent[root1] = root2               # rank1 -> rank2 로 연결
    else:                                   # 해당 경우는 경우의 수가 2개 존재, (rank1 이 더 큰 경우, 랭킹이 같은 경우(이 경우만 처리하면 됨.))
        parent[root1] = root2               # 둘 중에 하나 연결하면 됨. (여기서는 root1 -> root2) 로 연결

        if rank[root1] == rank[root2]:      # 랭킹이 같은 경우, 연결 된 노드(root2) 의 랭킹을 증가 (같은 랭킹인 경우 rank 이 증가하니깐)
            rank[root2] += 1
        
    
    


def make_set(node):
    # 노드들을 개별 집합으로 만듦.
    parent[node] = node
    rank[node] = 0
    

def kruskal(graph):
    # 크루스칼 알고리즘은 최소 신장 트리 구하는 알고리즘.
    mst = []

    # 1. 초기화 - 그래프의 노드들을 개별 집합으로 만든다.
    for node in graph['vertices']:
        make_set(node)                  # 그래프의 노드들을 개별 집합으로 만든다.
    
    # 2. 간선 weight 정렬 (최소 기준)
    edges = graph['edges']
    edges.sort()                        # 간선들을 최소값 기준으로 정렬

    # print(edges)

    # 3. 간선 연결 (사이클이 없는)
    for edge in edges:
        weight, node_u, node_v = edge

        if find(node_u) != find(node_v):        # 사이클이 없으면 (root 노드끼리 겹치지 않으면 사이클이 없음)
            union(node_u, node_v)               # union 작업 (노드 합칩)
            mst.append(edge)                    # 사이클이 없는 경우이므로 mst 인 경우

    return mst


def test_kruskal():
    print("=== kruskal ===")
    
    graph = {
        'vertices': ['A', 'B', 'C', 'D', 'E', 'F', 'G'],
        'edges': [
            (7, 'A', 'B'),
            (5, 'A', 'D'),
            (7, 'B', 'A'),
            (8, 'B', 'C'),
            (9, 'B', 'D'),
            (7, 'B', 'E'),
            (8, 'C', 'B'),
            (5, 'C', 'E'),
            (5, 'D', 'A'),
            (9, 'D', 'B'),
            (7, 'D', 'E'),
            (6, 'D', 'F'),
            (7, 'E', 'B'),
            (5, 'E', 'C'),
            (7, 'E', 'D'),
            (8, 'E', 'F'),
            (9, 'E', 'G'),
            (6, 'F', 'D'),
            (8, 'F', 'E'),
            (11, 'F', 'G'),
            (9, 'G', 'E'),
            (11, 'G', 'F'),
        ]
    }

    print("mst:", kruskal(graph))
    print()



## exe
test_kruskal()