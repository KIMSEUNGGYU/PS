import hashlib

S = input()
encoded_data = S.encode() # 해당 값의 byte 값
result = hashlib.sha256(encoded_data).hexdigest() # 해시화
print(result)
