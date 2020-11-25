N = int(input())

count = 1
result = []
stack = []

for _ in range(N):
    data = int(input())
    while count <= data:
        result.append('+')
        stack.append(count)
        count += 1
    
    if data == stack[-1]:
        stack.pop()     # 마지막 원소 빼기 -스택 구조
        result.append('-')
    else:
        print("NO")
        exit(0)

print('\n'.join(result))
