def print_perv(p, arr):
    for i in p:
        print(arr[i], end=" ")
    print()
    

def perv(arr, n):
    permutation = [i for i in range(n)]
    while True:
        print_perv(permutation, arr)
        i = n - 2
        while i >= 0 and permutation[i] > permutation[i+1]:
            i -= 1
        if i < 0:
            break
        k = n - 1
        while permutation[k] < permutation[i]:
            k -= 1
        permutation[i], permutation[k] = permutation[k], permutation[i]
        permutation[i+1:] = reversed(permutation[i+1:])


def main():
    n = int(input())
    arr = list(map(int, input().split()))
    arr.sort()
    perv(arr, n)
    

if __name__ == '__main__':
    main()