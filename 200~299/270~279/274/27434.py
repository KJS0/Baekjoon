import sys
import math

input = sys.stdin.readline
sys.set_int_max_str_digits(1000000)

def solve():
    N = int(input())
    print(math.factorial(N))

if __name__ == "__main__":
    solve()