import sys
result = 0

def z(n, x, y):
    global result
    if x == r and y == c:
        print(result)
        return

    # 해당 사면 범위가 아닌 경우, 해당 범위(n) 만큼 추가
    if not (x <= r < x +n and y <= c < y +n):
        result += n * n
        return

    # 해당 사면에 속한 경우, 범위를 좁혀서 다시 검사
    z(n // 2, x, y)
    z(n // 2, x, y + n // 2)
    z(n // 2, x + n // 2, y)
    z(n // 2, x + n // 2, y + n // 2)

n, r, c = map(int, sys.stdin.readline().split(' '))
z(2 ** n, 0, 0)

"""
# 옛날 버전 - 현재는 시간초과 에러 남
N, r, c = map(int, input().split())
result = 0

def z(n, x, y):
    global result

    if n == 2:
        if x == r and y == c:
            # 위왼이 같은지
            print(result)
            return 
        result += 1
        if x == r and y+1 == c:
            # 위오가 같은지
            print(result)
            return 
        result += 1
        if x+1 == r and y == c:
            # 아왼 같은지
            print(result)
            return 
        result += 1
        if x+1 == r and y+1 == c:
            # 아오가 같은지
            print(result)
            return 
        result += 1
    else:
        z(n // 2, x, y) # 각 사분면을 접근하는 위치 x,y
        z(n // 2, x, y + n // 2)
        z(n // 2, x + n/2, y)
        z(n // 2 ,x + n/2, y + n/2)

z(2**N, 0, 0)
'''
z(n // 2, x, y) # 각 사분면을 접근하는 위치 x,y
z(n // 2, x, y + n / 2)
z(n // 2, x + n/2, y)
z(n // 2 ,x + n/2, y + n/2)

n을 더하는 이유는 절반씩 줄어들 때 각 해당 위치를 알기 위해 
x + (n / 2) or y + (n/2) 를 함.
N이 3일때 8*8 사각형이 생성되고, 
재귀적으로 4*4 로 간다. 
이때, 2*2로 만들고 해당 조건을 통과하지 않으면 4*4 사각형에서 찾아야하는데 이때 시작점위치를 알려주는 것이 해당 조건
x|y + (n/2) 하는 이유는 n이 4일때 
0,0 
0,2
2,0
2,2 영역을 조사하기 위함.
"""
