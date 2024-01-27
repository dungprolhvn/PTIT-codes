def main():
    t = int(input())
    while t > 0:
        n, m = map(int, input().split())
        a = list(map(int, input().split()))
        b = list(map(int, input().split()))
        minb = b[0]
        maxa = a[0]
        for num in b:
            if num < minb:
                minb = num
        for num in a:
            if num > maxa:
                maxa = num
           
        print(minb*maxa)
        t -= 1



if __name__ == '__main__':
    main()