document = input()
word = input()

count = 0
index = 0
while index + len(word) <= len(document):
    if document[index:index+len(word)] == word:
        count += 1
        index += len(word)
    else:
        index += 1

print(count)