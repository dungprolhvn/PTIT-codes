def main():
    t = int(input())
    while t > 0:
        n = int(input())
        arr = list(map(int, input().split()))
        arr.sort()
        i = 0
        j = n - 1
        while i < j:
            print(f"{arr[j]} {arr[i]}", end=" ")
            i += 1
            j -= 1
        if n&1:
            print(arr[i])
        else:
            print()
        t -= 1


if __name__ == '__main__':
    main()