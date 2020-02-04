def _sum(progresses, speeds):
    return [sum(z) for z in zip(progresses, speeds)]


def solution(progresses, speeds):
    answer = []
    index = 0

    while index < len(progresses):
        if progresses[index] >= 100:
            count = 0

            for i in range(index, len(progresses)):
                if progresses[i] < 100:
                    break

                count += 1
                index += 1

            answer.append(count)
        progresses = _sum(progresses, speeds)
    return answer
