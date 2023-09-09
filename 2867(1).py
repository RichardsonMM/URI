n = int(input())
for i in range(n):
    n, m = map(int, input().split())
    c = pow(n, m)
    print(len(str(c)))