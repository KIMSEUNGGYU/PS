def dijstra():
    pass


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