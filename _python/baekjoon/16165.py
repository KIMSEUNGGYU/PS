N, M = map(int, input().split())

team_mem, mem_team = {}, {}

# 데이터 입력 받는 부분
for i in range(N):
    team_name, member = input(), int(input())
    team_mem[team_name] = []

    for i in range(member):
        name = input()
        team_mem[team_name].append(name)
        mem_team[name] =team_name


## 문제 풀이하는 부분
for i in range(M):
    name, q = input(), int(input())

    if q:
        print(mem_team[name])
    else:
        for member in sorted(team_mem[name]):
            print(member)

