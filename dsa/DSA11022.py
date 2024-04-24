def countNonLeaves(preOrder, n):
    if len(preOrder) <= 1:
        return 0
    root = preOrder[0]
    idx = -1
    for i in range(n):
        if preOrder[i] > root:
            idx = i
            break
    if idx == -1:
        return 1 + countNonLeaves(preOrder[1:], n - 1)
    left_tree = preOrder[1:idx]
    right_tree = preOrder[idx:]
    return 1 + countNonLeaves(left_tree, len(left_tree)) + countNonLeaves(right_tree, len(right_tree))
    


def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        pre_order = list(map(int, input().split())) 
        cnt = countNonLeaves(pre_order, n)
        print(cnt)
    

if __name__ == '__main__':
    main()