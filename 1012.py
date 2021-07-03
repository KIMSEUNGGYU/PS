import sys
sys.setrecursionlimit(100000)

def dfs(x, y):
    visited[x][y] = True
    directions = [(-1, 0), (1, 0), (0, -1), (0, +1)]    # 상하좌우

    for dx, dy in directions:
        nx, ny = x+dx, y+dy                             # 각 테이블의 범위를 구함

        if nx < 0 or nx >= n or ny < 0 or ny >= m:      # 테이블의 범위를 넘어가면 무시
            continue
        if array[nx][ny] and not visited[nx][ny]:       # 배추가 심어져있고, 아직 방문하지 않았다면
            dfs(nx, ny)




for _ in range(int(input())):
    m, n, k = map(int, input().split())
    array = [[0] * m for i in range(n)]
    visited = [[False] * m for i in range(n)]

    # 배추가 심은 위치 지정
    for _ in range(k):
        y, x = map(int, input().split())        # 주어진 입력이 y, x 순으로 주어짐
        array[x][y] = 1

    result = 0
    
    for i in range(n):
        for j in range(m):
            if array[i][j] and not visited[i][j]:   # 배추가 심어져 있고, 방문하지 않았다면
                dfs(i, j)
                result += 1
            
    print(result)