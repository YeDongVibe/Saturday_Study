N = int(input())  # 상근이 카드 수
N_A = list(map(int, input().split()))# 리스트로 처리하여 중복 허용.
M = int(input())  # 정수 카드 수
M_A = list(map(int, input().split()))

card_count = {}

for num in N_A:
    if num in card_count:
        card_count[num] += 1
    else:
        card_count[num] = 1

result = []
for num in M_A:
    if num in card_count:
        result.append(card_count[num])
    else:
        result.append(0)

# 결과 출력
print(' '.join(map(str, result)))
