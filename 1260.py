
def dfs(v):
    # 스택구조처럼 방문
    print(v, end=' ')            # 첫 원소는 방문

    visited[v] = True

    # 인접한 원소 방문
    for e in adj[v]:
        if not visited[e]:      # 아직 방문하지 않는 원소라면 스택구조(재귀적으로)처럼 방문
            dfs(e)


def bfs(v):
    q = [v]

    while q:
        v = q.pop(0)

        if not visited[v]:              # 아직 방문하지 않은 노드라면 
            visited[v] = True           # 방문했다고 처리하고 
            print(v, end=' ' )          # 데이터 출력하고
            for e in adj[v]:            # 방문한 노드의 인접한 노드 중에서 
                if not visited[e]:      # 아직 방문하지 않는 노드가 있다면 
                    q.append(e)         # q(queue) 에 삽입

n, m, v = map(int, input().split())

adj = [[] for i in range(n+1)]

for _ in range(m):
    x, y = map(int, input().split())
    adj[x].append(y)
    adj[y].append(x)

for e in adj:
    e.sort()

visited = [False] * (n+1)
dfs(v)
print()
visited = [False] * (n+1)
bfs(v)

