def factorial():
    pass

def multiple():
    pass

def sum_list():
    pass

def palindrome():
    pass

def make_one():
    pass

# def number_of_ways(num):
def func():
    pass

def fibonacci():
    pass


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