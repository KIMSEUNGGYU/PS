'''
스택
'''

# 1. 재귀함수


def recursive(data):
    if data < 0:
        print("ended")
    else:
        print(data)
        recursive(data-1)
        print("returned", data)

# 2. 스택 사용하기


def use_stack():
    stack = []

    stack.append(1)
    stack.append(2)

    print('stack:', stack)
    print('data pop:', stack.pop())
    print('stack:', stack)


# 3. 배열로 스택 구현하기
def implemetation_stack():
    stack_list = []

    def push(data):
        stack_list.append(data)

    def pop():
        data = stack_list[-1]
        del stack_list[-1]
        return data

    for index in range(10):
        push(index)

    print('stack:', stack_list)
    print('stack pop:', pop())
    print('stack pop:', pop())
    print('stack pop:', pop())
    print('stack:', stack_list)


# 실행
# recursive(4)            # 1
# use_stack()             # 2
implemetation_stack()     # 3
