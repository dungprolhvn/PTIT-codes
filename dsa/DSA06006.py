def main():
    t = int(input())
    while t > 0:
        n = int(input())
        c0 = c1 = c2 = 0
        numbers = list(map(int, input().split()))
        for tmp in numbers:
            if tmp == 0:
                c0 += 1
            elif tmp == 1:
                c1 += 1
            else:
                c2 += 1
        
        for i in range(c0):
            print(0, end=" ")
        for i in range(c1):
            print(1, end=" ")
        for i in range(c2):
            print(2, end=" ")
        print()
        t -= 1
        

if __name__ == '__main__':
    main()
       
       

        