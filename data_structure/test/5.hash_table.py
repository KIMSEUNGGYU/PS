import hashlib
HASH_TABLE_SIZE = 8


# 2. 해쉬 충돌 - 개방 해싱 체이닝 기법

def open_hashing():
    hash_table = [None for i in range(HASH_TABLE_SIZE)]

    def get_key(data):
        pass

    def hash_function(key):
        pass

    def save_data(data, value):
        pass

    def read_data(data):
        pass

    save_data("Dave", "1")      # 0
    save_data("Andy", "2")      # 4
    save_data("gyu", "3")       # 0 # <- 중복되서 키가 0인 값이 변경됨.
    # save_data("Gyu", "4")       # 4 # <- 중복되서 키가 4인 값이 변경됨.

    print("OPEN HASING HASH TABLE")
    print('read:', read_data("Dave"))
    print('read:', read_data("Andy"))
    print('read:', read_data("gyu"))
    print('read:', read_data("Not Founded"))
    print('hash_table:', hash_table)
    print("")

# 3. 해쉬 충돌 - 폐쇄 해싱 체이닝 기법


def close_hashing():
    hash_table = [None for i in range(HASH_TABLE_SIZE)]

    def get_key(data):
        pass

    def hash_function(key):
        pass

    def save_data(data, value):
        pass

    def read_data(data):
        pass

    save_data("Dave", "1")      # 0
    save_data("Andy", "2")      # 4
    save_data("gyu", "3")       # 0 # <- 중복되서 키가 0인 값이 변경됨.
    save_data("Gyu", "4")       # 4 # <- 중복되서 키가 4인 값이 변경됨.

    print("CLOSE HASING HASH TABLE")
    print('read:', read_data("Dave"))
    print('read:', read_data("Andy"))
    print('read:', read_data("gyu"))
    print('read:', read_data("Not Founded"))
    print('hash_table:', hash_table)
    print("")


open_hashing()                # 2
close_hashing()               # 3
