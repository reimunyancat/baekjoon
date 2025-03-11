def can_promote(skill, targets, m, a):
    score = 0
    for _ in range(m):
        for target in targets:
            if skill >= target:
                score += target
                skill += target
                break
        if score >= a:
            return True
    return False

def find_min_skill(n, m, a, targets):
    targets.sort(reverse=True)
    low, high = 0, 10**10
    
    while low <= high:
        mid = (low + high) // 2
        
        if can_promote(mid, targets, m, a):
            high = mid - 1
        else:
            low = mid + 1
    
    return low

n, m, a = map(int, input().split())
targets = list(map(int, input().split()))

min_skill = find_min_skill(n, m, a, targets)
print(min_skill)
