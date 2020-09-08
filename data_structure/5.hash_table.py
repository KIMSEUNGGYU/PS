import hashlib

HASH_TABLE_SIZE = 8

# 1. 기본 해쉬 테이블 구현


def base_hash_table():
    hash_table = [None for i in range(HASH_TABLE_SIZE)]

    def get_key(data):
        hash_obj = hashlib.sha256()
        hash_obj.update(data.encode())
        hex_dig = hash_obj.hexdigest()
        return int(hex_dig, 16)

    def hash_function(key):
        return key % HASH_TABLE_SIZE

    def save_data(data, value):
        key = get_key(data)
        hash_address = hash_function(key)
        hash_table[hash_address] = value

    def read_data(data):
        key = get_key(data)
        hash_address = hash_function(key)
        return hash_table[hash_address]

    save_data("Dave", "1")      # 0
    save_data("Andy", "2")      # 4
    save_data("gyu", "3")       # 0 # <- 중복되서 키가 0인 값이 변경됨.

    print("BASE HASH TABLE")
    print("read:", read_data("Dave"))
    print("")


# 2. 해쉬 충돌 - 개방 해싱 체이닝 기법
def open_hashing():
    hash_table = [None for i in range(HASH_TABLE_SIZE)]

    def get_key(data):
        hash_obj = hashlib.sha256()
        hash_obj.update(data.encode())
        hex_dig = hash_obj.hexdigest()
        return int(hex_dig, 16)

    def hash_function(key):
        return key % HASH_TABLE_SIZE

    def save_data(data, value):
        # data 가 키가 되고, 해당 키를 이용하여 value 를 저장함.
        key = get_key(data)
        hash_address = hash_function(key)

        # key 가 너무 길어서 축약
        key = str(key)[:5]

        # 체인닝 기법 적용
        if hash_table[hash_address] != None:           # 충돌이 발생하면
            # 해쉬 어드레스의 key 값이 중복되는게 있는지 검사 있으면 덮어쓰기
            for index in range(len(hash_table[hash_address])):
                if hash_table[hash_address][index][0] == key:
                    hash_table[hash_address][index][1] = value
                    return
            hash_table[hash_address].append([key, value])
        else:
            hash_table[hash_address] = [[key, value]]

    def read_data(data):
        key = get_key(data)
        hash_address = hash_function(key)

        # key 가 너무 길어서 축약
        key = str(key)[:5]

        if hash_table[hash_address] != None:  # 충돌나면
            for index in range(len(hash_table[hash_address])):
                if hash_table[hash_address][index][0] == key:
                    return hash_table[hash_address][index][1]
            return None
        else:
            return None

    save_data("Dave", "1")      # 0
    save_data("Andy", "2")      # 4
    save_data("gyu", "3")       # 0 # <- 중복되서 키가 0인 값이 변경됨.
    # save_data("Gyu", "4")       # 4 # <- 중복되서 키가 4인 값이 변경됨.

    print("OPEN HASING HASH TABLE")
    print('read Dave:', read_data("Dave"))
    print('read gyuAndy:', read_data("Andy"))
    print('read gyu:', read_data("gyu"))
    print('read Not Founded:', read_data("Not Founded"))
    print('hash_table:', hash_table)
    print("")


# 3. 해쉬 충돌 - 폐쇄 해싱 체이닝 기법
def close_hashing():
    hash_table = [None for i in range(HASH_TABLE_SIZE)]

    def get_key(data):
        hash_obj = hashlib.sha256()
        hash_obj.update(data.encode())
        hex_dig = hash_obj.hexdigest()
        return int(hex_dig, 16)

    def hash_function(key):
        return key % HASH_TABLE_SIZE

    def save_data(data, value):
        key = get_key(data)
        hash_address = hash_function(key)

        key = str(key)[:5]

        if hash_table[hash_address] != None:  # 충돌나면, 이미 데이터가 존재하면
            for index in range(hash_address, HASH_TABLE_SIZE):
                if hash_table[index] == None:
                    hash_table[index] = [key, value]
                    return
                elif hash_table[index][0] == key:
                    hash_table[index][1] = value
                    return
        else:
            hash_table[hash_address] = [key, value]

    def read_data(data):
        key = get_key(data)
        hash_address = hash_function(key)

        key = str(key)[:5]

        if hash_table[hash_address] != None:  # 충돌나면, 이미 데이터가 존재하면
            for index in range(hash_address, HASH_TABLE_SIZE):
                if hash_table[index] == None:
                    return None
                if hash_table[index][0] == key:
                    return hash_table[index][1]
        else:
            return None

    save_data("Dave", "1")      # 0
    save_data("Andy", "2")      # 4
    save_data("gyu", "3")       # 0 # <- 중복되서 키가 0인 값이 변경됨.
    save_data("Gyu", "4")       # 4 # <- 중복되서 키가 4인 값이 변경됨.

    print("CLOSE HASING HASH TABLE")
    print('read Dave:', read_data("Dave"))
    print('read gyuAndy:', read_data("Andy"))
    print('read gyu:', read_data("gyu"))
    print('read Not Founded:', read_data("Not Founded"))
    print('hash_table:', hash_table)
    print("")


base_hash_table()             # 1
open_hashing()                # 2
close_hashing()               # 3
