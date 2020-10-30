def factorial(num):
    # num! 구하기
    if num <= 1:
        return num

    return num * factorial(num-1)


def multiple(num):
    # 1 ~ num 까지의 곱셈 구하기
    if num <= 1:
        return 1

    return num * multiple(num-1)


def sum_list(data):
    # 배열안에 있는 모든 수의 합 구하기
    if len(data) <= 1:
        return data[0]

    return data[0] + sum_list(data[1:])


def palindrome(str):
    # 회문 인지 판단하기
    if len(str) <= 1:
        return True
    elif str[0] == str[-1]:
        return palindrome(str[1:-1])
    else:
        return False

def make_one(num):
    # num 이 홀수이면, 3 * num + 1 을하고
    # num 이 짝수이면, 2 * num 을 해서
    # "최종적으로 1 만들기"
    print("num:", num)

    if num == 1:
        return 1

    if num % 2 == 1:
        return make_one(3 * num + 1)
    else:
        return make_one(num // 2)

# def num_number_of_ways(num):
def func(num):
    # 1, 2, 3 의 합으로 num 을 만드는 방법의 수
    # 로직을 구하기 위해서는 1, 2, 3, 4, ... 를 각각 만드는 패턴을 하드로 해서 찾아봐야함. 그럼 규칙이 보임.
    # 1=1, 2=2, 3=4, 4=7, 5=13 .... 방법 존재
    if num == 1:
        return 1
    elif num == 2:
        return 2
    elif num == 3:
        return 4
    else:
        return func(num-1) + func(num-2) + func(num-3)

def fibonacci(num):
    # 피보나치 수열 구하기
    if num <= 1:
        return num
    else:
        return fibonacci(num-1) + fibonacci(num-2)

def test_factorial():
    print("=== factorial ===")
    print("5!:", factorial(10))
    print()

def test_multiple():
    print("=== multiple ===")
    print("5 multiple:", multiple(10))
    print()

def test_sum_list():
    # 배열 안의 모든 수 총합 구하기
    import random
    data = random.sample(range(100), 10)

    print("=== sum list ===")
    print("random numbers:", data)

    print("sum:", sum_list(data))
    print()

def test_palindrome():
    print("=== palindrome ===")
    print("aws:", palindrome("aws"))
    print("level:", palindrome("level"))
    print("tattarrattat:", palindrome("tattarrattat"))
    print()

def test_make_one():
    print("=== make one ===")
    make_one(3)
    print()

def test_number_of_ways():
    print("=== number_of_ways ===")
    print("6 number of ways:", func(6))
    print("5 number of ways:", func(5))
    print("4 number of ways:", func(4))

def test_fibonacci():
    print("=== fibonacci ===")
    print("4 fibonacci:", fibonacci(4))

# test_factorial()
# test_multiple()
# test_sum_list()
# test_palindrome()
# test_make_one()
# test_number_of_ways()
test_fibonacci()