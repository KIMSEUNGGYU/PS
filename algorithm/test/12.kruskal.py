

def find():
    pass

def union():
    pass
        
    
def make_set():
   pass
    

def kruskal():
   pass


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