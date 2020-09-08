def implement_queue():
    queue = []

    def enqueue(data):
        pass

    def dequeue():
        pass

    # 큐에 삽입
    for index in range(10):
        enqueue(index)

    print("queue size:", len(queue))

    print("queue get", dequeue())
    print("queue get", dequeue())
    print("queue get", dequeue())

    print("queue size:", len(queue))


# test
implement_queue()
