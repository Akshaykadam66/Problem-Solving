t = int(input())
for j in range(0,t):
    n = int(input())
    l=list(map(int,input().split()))
    s = n*(n+1)/2;
    print(int(abs(sum(l)-s)),end="\n")