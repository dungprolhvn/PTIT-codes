def solve(s):
    rs = count = 0
    for char in s:
        if char == '[':
            count += 1
        else:
            count -= 1
            rs += -count if count < 0 else 0
    return rs


def main():
    t = int(input())
    for _ in range(t):
        s = input()
        print(solve(s))  

main()