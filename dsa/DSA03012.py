from math import ceil

def check(string):
    l = len(string)
    freq = dict()
    for char in string:
        if char not in freq:
            freq[char]=1
        else:
            freq[char]+=1
    for char in freq:
        if freq[char] > ceil(l/2):
            return -1
    return 1


def main():
    t = int(input())
    while t > 0:
        s = input()
        print(check(s))
        t -= 1


if __name__ == '__main__':
    main()