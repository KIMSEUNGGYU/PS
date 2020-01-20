def solution(n):
    check = [1 for i in range(n+1)]

    for i in range(2, n+1):
        if check[i] == 1:
            for j in range(i*2, n+1, i):
                check[j] = 0
    return sum(check) - 2