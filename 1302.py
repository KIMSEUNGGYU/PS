books = {}

# 책 중복 갯수 정하기
for _ in range(int(input())):
    title = input()

    if books.get(title):
        books[title] += 1
    else:
        books[title] = 1

# 가장 중복된 책 찾기
array = []
_max = max(books.values())

for title in books:
    if books[title] == _max:
        array.append(title)

# 사전 순으로 정렬해서 첫 번째 값 출력
array.sort()
print(array[0])


''' 테스트 케이스
4
b
b
a
a
'''