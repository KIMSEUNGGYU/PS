import hashlib

input_data = input()
encoded_data = hashlib.sha256(input_data.encode())
result = encoded_data.hexdigest()
print(result)
