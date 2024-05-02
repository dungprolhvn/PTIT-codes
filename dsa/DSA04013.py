def solve(kangurus, size):
    kangurus.sort()
    rs = size
    left = int(size/2) - 1
    mid = int(size/2)
    right = size - 1
    while left >= 0 and right >= mid:
        if kangurus[left]*2 <= kangurus[right]:
            rs -= 1
            left -= 1
            right -= 1
        else:
            left -= 1
    return rs


def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        kanguru = list(map(int, input().split()))
        print(solve(kanguru, n))
    
    
if __name__ == '__main__':
    main()