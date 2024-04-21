def postOrder(inOrder, levelOrder, n):
    if not inOrder or not levelOrder:
        return []
    root_node = levelOrder[0]
    root_index = inOrder.index(root_node)
    l = root_index
    r = n - l - 1
    left_io = inOrder[:l]
    right_io = inOrder[l+1:]
    
    left_lo = [i for i in levelOrder if i in left_io]
    right_lo = [i for i in levelOrder if i in right_io]
    
    return postOrder(left_io, left_lo, l) + postOrder(right_io, right_lo, r) + [root_node]
        


def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        in_order = list(map(int, input().split()))
        level_order = list(map(int, input().split()))
        post_order = postOrder(in_order, level_order, n)
        for i in post_order:
            print(i, end=" ")
        print()
    

if __name__ == '__main__':
    main()