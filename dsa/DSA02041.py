def solve(n):
    queue = [(n, 0)]
    visited = dict()
    while queue:
        num, step = queue.pop(0)
        if num == 1:
            return step
        if num % 3 == 0 and num/3 not in visited:
            queue.append((num/3, step+1))
            visited[num/3] = True
        if num % 2 == 0 and num/2 not in visited:
            queue.append((num/2, step+1))
            visited[num/2] = True
        if num-1 not in visited:
            queue.append((num-1, step+1))
            visited[num-1] = True
    return n - 1
    
            

def main():
    t = int(input())
    for _ in range(t):
        min_step = float("inf")
        visited = dict()
        n = int(input())
        min_step = solve(n)
        print(min_step)
    
if __name__ == '__main__':
    main()