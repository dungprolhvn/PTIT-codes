catalan = [0]*101
catalan[0] = catalan[1] = 1
for i in range(2, 101):
    for j in range(i//2):
        catalan[i] += 2*catalan[j]*catalan[i-j-1]
    if i & 1:
        catalan[i] += catalan[i//2]*catalan[i//2]

t = int(input())
for _ in range(t):
    n = int(input())
    print(catalan[n])