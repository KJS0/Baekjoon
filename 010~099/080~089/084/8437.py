import sys
input = sys.stdin.readline
apple = int(input())
diff = int(input())
x = (apple + diff) // 2
print(x)
print(x - diff)