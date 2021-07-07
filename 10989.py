# https://www.acmicpc.net/problem/10989
# 계수 정렬

# 1. 풀이 1 - 시간 초과
# 입력 부분 문제
# N = int(input())

# obj = {}
# for _ in range(N):
#     n = int(input())

#     if obj.get(n):
#         obj[n] += 1
#     else:
#         obj[n] = 1

# for i in range(1, 10001):
#     if obj.get(i):
#         for _ in range(obj[i]):
#             print(i)



# 2. 풀이 2
# 입력 받을때 sys.stdin.readline() 이 기능이 빠름.
import sys
n = int(sys.stdin.readline())
array = [0] * 10001

for i in range(n):
    data = int(sys.stdin.readline())
    array[data] += 1

for i in range(10001):
    if array[i] != 0:
        for j in range(array[i]):
            print(i)