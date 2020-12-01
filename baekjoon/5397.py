test_case = int(input())

for _ in range(test_case):
    string = input()

    stack1, stack2 = [], []

    for char in string:
        if '<' == char:
            if stack1:
                stack2.append(stack1.pop())
        elif '-' == char:
            if stack1:
                stack1.pop()
        elif '>' == char:
            if stack2:
                stack1.append(stack2.pop())
        else:
            stack1.append(char)

    stack1.extend(reversed(stack2))                  # 오른쪽에 데이터가 있을 수 있으니깐
    print(''.join(stack1))
