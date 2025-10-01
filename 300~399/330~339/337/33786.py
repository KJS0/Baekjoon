import sys
input = sys.stdin.readline

def solve():
    arr = [0]
    n = int(input())

    for i in range(1, n + 1):
        arr.append(i + i * arr[i - 1])
    print(arr[n])

if __name__ == "__main__":
    solve()