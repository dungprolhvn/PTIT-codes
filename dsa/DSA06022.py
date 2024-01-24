def main():
    t = int(input())
    while t > 0:
        n = int(input())
        line = input()
        arr = list(map(int, line.split()))
        minn = miner = 1e8
        for i in arr:
            if i < minn:
                if i < miner:
                    minn = miner
                    miner = i
                else:
                    minn = i
                    
        if minn != miner and minn != -1 and miner != -1:
            print(f"{miner} {minn}")
        else:
            print(-1)
        t -= 1
        
        
if __name__ == '__main__':
    main()