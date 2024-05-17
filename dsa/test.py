n = int(input())
jobs = {}
for _ in range(n):
    a, b = map(int, input().split())
    if a not in jobs:
        jobs[a] = []
    jobs[a].append(b)
total = 0
for i in jobs:
    total += max(jobs[i])
print(total)