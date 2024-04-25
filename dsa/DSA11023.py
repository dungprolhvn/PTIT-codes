def treeLevel(preOrder, start, end, level):
    """
    Return the level of the BST from preorder traversal
    """
    if start >= end:
        return level
    root = preOrder[start]
    idx = -1
    for i in range(start+1, end+1):
        if root < preOrder[i]:
            idx = i
            break
    if idx == -1:
        return treeLevel(preOrder, start+1, end, level+1)
    return max(treeLevel(preOrder, start+1, idx-1, level+1), treeLevel(preOrder, idx, end, level+1))


def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        pre_order = list(map(int, input().split()))
        print(treeLevel(pre_order, 0, n - 1, 0))
    

if __name__ == '__main__':
    main()