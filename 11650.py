# https://www.acmicpc.net/problem/11650

N = int(input())

array = []

for _ in range(N):
    x, y = map(int, input().split())
    array.append((x, y))

array.sort()

for x, y in array:
    print(x, y)