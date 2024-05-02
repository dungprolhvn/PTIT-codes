def main():
    MOD = int(1e9+7)
    t = int(input())
    for _ in range(t):
        n, k = map(int, input().split())
        arr = list(map(int, input().split()))
        dp = [0] * (k + 1)
        dp[0] = 1
        for s in range(1, k+1):
            for i in range(n):
                if s >= arr[i]:
                    dp[s] = (dp[s] + dp[s - arr[i]]) % MOD
        print(dp[k])
if __name__ == '__main__':
    main()