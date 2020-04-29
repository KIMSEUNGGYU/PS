# 내 풀이
document = input()
find_data = input()

start_index, find_length, last_index = 0, len(find_data), len(document)
count = 0

while start_index + find_length <= last_index:
    if document[start_index:start_index+find_length] == find_data:
        start_index += find_length
        count += 1
    else:
        start_index += 1

print(count)

"""
# 다른 사람 풀이
document = input()
word = input()

index = 0
result = 0

while len(document) - index >= len(word):
    if document[index:index+len(word)] == word:  # 문서에서 보고 있는 단어가 찾고자 하는 단어인 경우
        result += 1
        index += len(word)
    else:
        index += 1

print(result)
"""
