N = int(input())
numbers = set(map(int, input().split()))

M = int(input())
question = list(map(int, input().split()))

for x in question:
    if x not in numbers:
        print(0)
    else:
        print(1)
