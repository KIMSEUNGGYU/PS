def qsort():
    pass


def qsort2():
    pass


def test_qsort():
    print("=== quick sort ===")
    import random
    data = random.sample(range(100), 10)
    print("before sort:", data)
    print("after sort:", qsort(data))
    print()


def test_qsort2():
    print("=== quick sort2 ===")
    import random
    data = random.sample(range(100), 10)
    print("before sort:", data)
    print("after sort:", qsort2(data))
    print()


# test_qsort()
# test_qsort2()