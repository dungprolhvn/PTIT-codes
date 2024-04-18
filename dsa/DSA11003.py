def post_order(preorder, inorder, n):
    if not preorder or not inorder:
        return []
    root = preorder[0]
    root_index = inorder.index(root)
    l = root_index
    r = n - root_index - 1
    
    left_preorder = preorder[1:l+1]
    right_preorder = preorder[l+1:]
    
    left_inorder = inorder[:root_index]
    right_inorder = inorder[root_index+1:]
    
    left_part = post_order(left_preorder, left_inorder, l)
    right_part = post_order(right_preorder, right_inorder, r)
    
    return left_part + right_part + [root]
    


def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        inorder = list(map(int, input().split()))
        preorder = list(map(int, input().split()))
        postorder = post_order(preorder, inorder, n)
        for i in postorder:
            print(i, end=" ")
        print()
        

if __name__ == '__main__':
    main()