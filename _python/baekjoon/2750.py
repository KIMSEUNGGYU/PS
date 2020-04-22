N = int(input())
lst = []

for _ in range(N):
    data = int(input())
    lst.append(data)

lst.sort()
for data in lst:
    print(data)
