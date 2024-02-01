def generate_gray_code(n):
    # Init
    gray_code = [0]*n
    generated = set()
    # Loop
    while True:
        print(''.join(map(str, gray_code)), end=" ")
        generated.add(''.join(map(str, gray_code)))
        i = n - 1
        while i >= 0:
            gray_code[i] = 1 - gray_code[i]
            if ''.join(map(str, gray_code)) not in generated:
                break
            gray_code[i] = 1 - gray_code[i]
            i -= 1
        if i < 0:
            break


def main():
    t = int(input())
    while t > 0:
        n = int(input())
        generate_gray_code(n)
        print()
        t -= 1


if __name__ == '__main__':
    main()