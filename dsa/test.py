def main():
    MAXN = 101
    MOD = int(1e9+7)
    dp = [0] * MAXN
    dp[1] = 10
    for i in range(2, MAXN):
        dp[i] = (dp[i - 1] * (i + 9)) % MOD
        dp[i] = (dp[i] * pow(i, MOD - 2, MOD)) % MOD
    t = int(input())
    for _ in range(t):
        n = int(input())
        print(dp[n])

if __name__ == '__main__':
    main()