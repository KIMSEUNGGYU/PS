N, M = map(int, input().split())
data = list(map(int, input().split()))

result = 0
length = len(data)

for i in range(0, length):
    for j in range(i+1, length):
        for k in range(j+1, length):
             sum_data = data[i] + data[j] + data[k]
             if sum_data <= M:
                 result = max(result, sum_data)


print(result)
