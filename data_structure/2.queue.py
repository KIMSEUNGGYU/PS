# 큐
import queue

# 1. 일반적인 큐


def generalQueue():
    data_queue = queue.Queue()
    data_queue.put("gyu")
    data_queue.put(1)

    print('queue size:', data_queue.qsize())
    print('queue get:', data_queue.get())
    print('queue get:', data_queue.get())
    print('queue size:',  data_queue.qsize())

# 2. Lifo Queue


def lifo_queue():
    lifo_queue = queue.LifoQueue()
    lifo_queue.put("gyu")
    lifo_queue.put("1")

    print("lifo_queue size", lifo_queue.qsize())
    print("lifo_queue get", lifo_queue.get())
    print("lifo_queue get", lifo_queue.get())
    print("lifo_queue size", lifo_queue.qsize())


# 3. Priorty Queue
def priorty_queue():
    priorty_queue = queue.PriorityQueue()
    priorty_queue.put((10, "gyu"))
    priorty_queue.put((5, "korea"))
    priorty_queue.put((15, "china"))

    print("priorty_queue size", priorty_queue.qsize())
    print("priorty_queue get", priorty_queue.get())
    print("priorty_queue get", priorty_queue.get())
    print("priorty_queue get", priorty_queue.get())
    print("priorty_queue size", priorty_queue.qsize())

# 4. 배열을 활용하여 queue 구현


def implement_queue():
    queue = []

    def enqueue(data):
        queue.append(data)

    def dequeue():
        data = queue[0]
        del queue[0]
        return data

    for index in range(10):
        enqueue(index)

    print("queue size:", len(queue))

    print("queue get", dequeue())
    print("queue get", dequeue())
    print("queue get", dequeue())

    print("queue size:", len(queue))


# 실행
# generalQueue()        # 1
# lifo_queue()          # 2
# priorty_queue()       # 3
# implement_queue()     # 4
