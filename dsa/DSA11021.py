def findAllLeaves(preOrder, start, end):
    """
    Return all leaves of a binary search tree
    """
    if start > end:
        return []
    root = preOrder[start]
    idx = start + 1
    while idx <= end and preOrder[idx] < root:
        idx += 1
    left_leaves = findAllLeaves(preOrder, start + 1, idx - 1)
    right_leaves = findAllLeaves(preOrder, idx, end)
    if not left_leaves and not right_leaves:
        return [root]
    return left_leaves + right_leaves
    

def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        pre_order = list(map(int, input().split())) 
        leaves = findAllLeaves(pre_order, 0, n - 1)
        for leaf in leaves:
            print(leaf, end=" ")
        print()
    
if __name__ == '__main__':
    main()