def fibonacci(num):
    # 피보나치 수열 구하기
    cache = [0 for i in range(num+1)]   # 캐시
    cache[0] = 0
    cache[1] = 1

    for index in range(2, num+1):
        cache[index] = cache[index-1]+cache[index-2]

    return cache[num]

def test_fibonacci():
    print("=== fibonacci ===")
    print("3 fibonacci:", fibonacci(3))
    print("4 fibonacci:", fibonacci(4))
    print("10 fibonacci:", fibonacci(10))

# test_fibonacci()