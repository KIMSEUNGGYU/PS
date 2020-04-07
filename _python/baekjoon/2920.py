# 내풀이
"""
c_major = list(map(int, input().split()))

is_ascending = sorted(c_major)
is_descending = sorted(c_major, reverse=True)

if is_ascending == c_major:
    print('ascending')
elif is_descending == c_major:
    print('descending')
else:
    print('mixed')
"""

# 다른 사람 풀이
inp = list(map(int, input().split()))

ascending = True
descending = True

for i in range(1, 8):
    if inp[i] > inp[i-1]:
        descending = False
    elif inp[i] < inp[i-1]:
        ascending = False

if ascending:
    print('ascending')
elif descending:
    print('descending')
else:
    print('mixed')



