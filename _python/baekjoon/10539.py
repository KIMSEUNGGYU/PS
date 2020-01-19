N, B = int(input()), list(map(int, input().split()))

A = [0 for i in range(N)]

A[0] = B[0]

for index in range(1, N):
    A[index] = (B[index]*(index+1) - sum(A))

for data in A:
    print(data, end=' ')
