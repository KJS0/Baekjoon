import sys
input = sys.stdin.readline

def factorial(num):
    result = 1
    for i in range(1, num + 1):
        result *= i
    return result

def solve():
    N = str(factorial(int(input())))
    index = len(N) - 1
    cnt = 0
    while N[index] == '0':
        index -= 1
        cnt += 1
    print(cnt)

if __name__ == "__main__":
    solve()