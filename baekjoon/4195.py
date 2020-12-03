test_case = int(input())



def find(x):
    if parent[x] == x:
        return x
    else:
        p = find(parent[x])
        parent[x] = p
        return parent[x]

def union(x, y):
    parent_x = find(x)
    parent_y = find(y)

    if parent_x != parent_y:
        parent[parent_y] = parent[parent_x]
        number[parent_x] += number[parent_y]

for _ in range(test_case):
    parent = {}
    number = {}

    f = int(input())

    for _ in range(f):
        x, y = input().split()

        # make set
        if x not in parent:
            parent[x] = x
            number[x] = 1
        
        if y not in parent:
            parent[y] = y
            number[y] = 1
        
        union(x, y)
        print(number[find(x)])