# test_case = int(input())

'''
키로거 로직
1. 문자열을 입력 받는다. 
2. 문자를 하나씩 받아서 각 행동을 분석한다?
   - "<" 는 스택에 있는 값을 pop 한다. (이때 pop 한 값은, queue 에 저장한다.)
   - ">" 는 스택에서 pop 한 값을 추가한다.
   - "-" 는 스택에서 삭제한다.
'''
"""
stack = []
queue = []

for _ in range(test_case):
    L_lst = input()

    for L in L_lst:
        if L == '<':
            if len(stack) == 0:
                continue
            data = stack.pop()
            queue.append(data)
            # 스택에 있는 값을 pop 한다. 단, 이때는 값이 없을경우 무시
        elif L == '>':
            # 스택에서 pop 한 값을 다시 스택에 추가한다.
            if len(queue) == 0:
                continue
            data = stack.pop(0)
            stack.append(data)
        elif L == '-':
            # 스택에서 데이터를 pop 한다.
            stack.pop()
        else:
            stack.append(L)


print("".join(stack))
"""


"""
- 스택 자료구조 두개를 이용하면 좋음

문제 풀이
1. 스택 두 개를 만들고, 스택 두 개의 중간지점을 cursor 로 간주
2. 문자 입력: 왼쪽 스택에 원소를 삽입
3. "-" 입력: 왼쪽 스택에서 원소를 삭제
4. "<" 입력: 왼쪽 스택에서 오른쪽 스택으로 원소를 이동
5. ">" 입력: 오른쪽 스택에서 왼쪽 스택으로 원소를 이동
"""

test_case = int(input())


for _ in range(test_case):
    left_stack = []
    right_stack = []
    L_lst = input()

    for L in L_lst:
        if L == "-":
            if left_stack:
                left_stack.pop()
        elif L == "<":
            if left_stack:
                data = left_stack.pop()
                right_stack.append(data)
        elif L == ">":
            if right_stack:
                data = right_stack.pop()
                left_stack.append(data)
        else:
            left_stack.append(L)

    left_stack.extend(reversed(right_stack))
    print("".join(left_stack))


