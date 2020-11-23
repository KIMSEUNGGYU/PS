c_major = list(map(int, input().split()))

ascending, descending = True, True

for index in range(1, 8):
    if c_major[index-1] > c_major[index]:
        ascending = False
    if c_major[index-1] < c_major[index]:
        descending = False
        
if ascending:
    print("ascending")
elif descending:
    print("descending")
else:
    print("mixed")
