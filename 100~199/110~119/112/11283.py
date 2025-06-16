import sys
input = sys.stdin.readline

def solve():
    ch = input(1)
    print(ord(ch) - ord('가') + 1)

if __name__ == "__main__":
    solve()