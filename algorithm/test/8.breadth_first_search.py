def bfs():
    pass

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