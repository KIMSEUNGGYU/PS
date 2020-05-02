import copy

# 사용가능한 연산자들을 만듦
def recursive(array, n):
    if len(array) == n:
        operation_list.append(copy.deepcopy(array))
        return

    array.append(' ')
    recursive(array, n)
    array.pop()

    array.append('+')
    recursive(array, n)
    array.pop()

    array.append('-')
    recursive(array, n)
    array.pop()


test_case = int(input())

for _ in range(test_case):
    operation_list = []
    n = int(input())
    recursive([], n-1)

    integers = [i for i in range(1, n+1)]

    for operators in operation_list:
        string = ""
        for i in range(n-1):
            string += str(integers[i]) + operators[i]
        string += str(integers[-1])

        if eval(string.replace(" ", "")) == 0: # 공백인 경우, 문자를 이은다. 즉 2 3 인경우 23임.
            print(string)

    print()
