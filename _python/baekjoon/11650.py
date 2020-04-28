# 파이썬 에서의 sort 함수는 (x, y)(튜플) 인 경우 x 를 정렬하고 같으면 y 도 정렬하는 속성이 있음

N = int(input())

lst = []
for _ in range(N):
    x, y = map(int, input().split())
    lst.append((x, y))

lst = sorted(lst)

for x, y in lst:
    print(x, y)
