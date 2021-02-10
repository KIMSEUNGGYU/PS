"""
고려 사항
- 가능한 연산자와 연산해야할 숫자들을 분리해서 고려

로직
1. 가능한 연산자 배열 생성 (재귀적)
2. 숫자 범위 생성 (1 ~ N)
3. 숫자 범위 -1 만큼 돌려서 식 생성
   "숫자 범위-1" 인 연산자가 나올 수 있는 경우가 N-1 이기 때문에
4. 마지막에 숫자 붙임
5. eval 함수를 이용하여 해당 식의 결과 값이 0이면 출력
"""
import copy


# 사용가능한 연산자들을 만듦
def make_operators(array, n):
    # 나올 수 있는 연산자 복사
    if len(array) == n:
        operators.append(copy.deepcopy(array))
        return

    array.append(" ")
    make_operators(array, n)
    array.pop()

    array.append("+")
    make_operators(array, n)
    array.pop()

    array.append("-")
    make_operators(array, n)
    array.pop()


for _ in range(int(input())):
    # 1. 가능한 경우의 수를 만들기 (recursive 함수)
    # 2. 가능한 수 정의
    # 3. 1과 2에서 구한 조합으로 계산하여 0이 되는지 판단.
    n = int(input())
    numbers = [i for i in range(1, n+1)]
    operators = []

    # 가능한 연산자 모두 구함
    make_operators([], n-1)

    for operator in operators:
        # 수식 생성
        formula = ''
        for i in range(len(numbers) - 1):
            formula += str(numbers[i]) + operator[i]
        formula += str(numbers[-1]) # 수식에 마지막 수 추가

        # 수식을 계산했을때 0 인경우 수식 출력
        if eval(formula.replace(" ", "")) == 0:
            print(formula)
    print()


