N = int(input())

lst = []
for _ in range(N):
    age, name = input().split()
    lst.append((int(age), name))

lst = sorted(lst, key=lambda x: x[0])

for age, name in lst:
    print(age, name)