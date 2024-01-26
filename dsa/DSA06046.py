def main():
    t = int(input())
    while (t > 0):
        n = int(input())
        arr = list(map(int, input().split()))
        arr.sort()
        min_diff = 1e10
        for i in range(n - 1):
            diff = arr[i+1] - arr[i]
            min_diff = min(min_diff, diff)
        print(min_diff)
        t -= 1
    

if __name__ == '__main__':
    main()