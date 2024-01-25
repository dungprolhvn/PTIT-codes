def main():
    t = int(input())
    while t > 0:
        n = int(input())
        arr = list(map(int, input().split()))
        freq = dict()
        for num in arr:
            if num not in freq:
                freq[num] = 1
            else:
                freq[num] += 1
        for num in freq:
            if freq[num] > n / 2:
                print(num)
                break;
        else:
            print("NO")
        t -= 1


if __name__ == '__main__':
    main()