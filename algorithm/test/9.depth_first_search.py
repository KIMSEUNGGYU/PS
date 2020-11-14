def dfs():
    pass
                
def dfs_left():
    pass
                

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
# test_dfs_left_first()     # 노드의 왼쪽 자식노드부터 dfs 수행