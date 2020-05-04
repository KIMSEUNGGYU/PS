# N: 집의 갯수, C: 공유기 갯수
# 이진탐색
N, C = map(int, input().split())
array = []
for _ in range(N):
    array.append(int(input()))
array.sort()

start = array[1] - array[0]  # 최소 갭
end = array[-1] - array[0]  # 최대 갭 구함
result = 0

while(start <= end):
    mid = (start + end) // 2  # mid 는 gap 을 의미
    value = array[0]
    count = 1
    for i in range(1, len(array)):  # gap 을 이용해서 모든 집들을 확인, 가장 왼쪽부터 설치할 수 있는 공유기 확인
        if array[i] >= value + mid:  # 첫번째 값하고 gap 의 값을 이용해서 집의 위치 파악?
            value = array[i]
            count += 1

    if(count >= C):         # C 개 이상의 공유기를 설치할 수 있는 경우
        start = mid + 1
        result = mid
    else:                   # C 개 이상의 공유기를 설치할 수 없는 경우
        end = mid - 1

print(result)
