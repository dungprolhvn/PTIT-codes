def binarySearch(arr, start, end, target):
    while start <= end:
        mid = int(start + (end - start) / 2)
        if target == arr[mid]:
            return 1
        elif target < arr[mid]:
            end = mid - 1
        else:
            start = mid + 1
    return -1


def main():
    t = int(input())
    while t > 0:
        n, q = map(int, input().split())
        arr = list(map(int, input().split()))
        print(binarySearch(arr, 0, n - 1, q))
        t -= 1
        
if __name__ == '__main__':
    main()