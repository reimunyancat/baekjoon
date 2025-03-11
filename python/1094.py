x = int(input())  # xcm를 입력받습니다.

# 초기 막대의 길이는 64cm입니다.
sticks = [64]
sum_length = 64

while sum_length > x:
    # 가장 작은 막대를 절반으로 자릅니다.
    smallest = sticks.pop()
    half = smallest // 2
    sticks.append(half)
    
    # 절반 중 하나를 버렸을 때 총 길이가 x 이상인지 확인합니다.
    if sum_length - half >= x:
        sum_length -= half
    else:
        # 버리지 않고 두 조각 모두 사용합니다.
        sticks.append(half)

# 남은 막대의 개수를 출력합니다.
print(len(sticks))