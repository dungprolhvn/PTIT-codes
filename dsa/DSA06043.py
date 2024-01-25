def main():
    t = int(input())
    while t>0:
        n = int(input())
        arr = list(map(int, input().split()))
        lrr = [0 for i in arr]
        rrr = [0 for i in arr]
        summ = 0
        # stores sum of elements up to position i from the left and right
        for i in range(n):
            summ += arr[i]
            lrr[i] = summ
        summ = 0
        for i in range(n - 1, -1, -1):
            summ += arr[i]
            rrr[i] = summ

        for i in range(n):
            if lrr[i] == rrr[i]:
                print(i + 1)
                break
        else:
            print(-1)
            
        t -= 1
        
        
if __name__ == '__main__':
    main()