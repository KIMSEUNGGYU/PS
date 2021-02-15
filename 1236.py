N, M = map(int, input().split())
castle = [input() for _ in range(N)]

# 계산하기 쉽게 데이터 변환 과정
row = [0] * N
column = [0] * M
for i in range(N):
    for j in range(M):
        if castle[i][j] == 'X':
            row[i] = 1
            column[j] = 1

# 필요한 경비원 수 구하기
row_count = N - sum(row)
column_count = M - sum(column)
print(max(row_count, column_count))

"""
4 4
....
....
....
....

4 4
....
..X.
....
XXXX
"""