N, M = map(int, input().split(' '))
A, B = input().split(' ')


ALPABET_COUNT = [3, 2, 1, 2, 4, 3, 1, 3, 1, 1, 3, 1, 3, 2, 1, 2, 2, 2, 1, 2, 1, 1, 1, 2, 2, 1]

AB = ''
min_len = min(N, M)

for i in range(min_len):
    AB += A[i] + B[i]

# 둘 중 하나가 짧은 문자면 min_len 이후에 문자가 없으므로 더 긴 문자열만 추가됨
AB += A[min_len:] + B[min_len:]


lst = [ALPABET_COUNT[ord(i)-ord('A')] for i in AB]

# 한 번 할때 마다 (j 과정) 길이가 1씩 줄어드므로 두 개의 데이터만 남겨야하기 때문에
for i in range(N+M-2):
    # 각 계층마다(i가 돌때마다) 하나씩(-1) 줄어듦, 또한 각 계층마다
    for j in range(N+M-1-i):
        lst[j] += lst[j+1]


print(f'{lst[0]%10*10 + lst[1]%10}%')
