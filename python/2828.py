def minimum_basket_moves(N, M, apple_positions):
    # 바구니의 초기 위치 설정
    left = 1
    right = M
    total_moves = 0

    # 각 사과의 위치에 대해 처리
    for apple in apple_positions:
        if apple < left:
            # 사과가 바구니 왼쪽에 떨어지면, 바구니를 왼쪽으로 이동
            total_moves += left - apple
            left = apple
            right = left + M - 1
        elif apple > right:
            # 사과가 바구니 오른쪽에 떨어지면, 바구니를 오른쪽으로 이동
            total_moves += apple - right
            right = apple
            left = right - M + 1

    return total_moves

# 입력 받기
N, M = map(int, input().split())
J = int(input())
apple_positions = [int(input()) for _ in range(J)]

# 최소 이동 거리 계산
result = minimum_basket_moves(N, M, apple_positions)
print(result)