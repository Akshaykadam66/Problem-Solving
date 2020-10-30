# https://practice.geeksforgeeks.org/problems/first-element-to-occur-k-times/0#
t = int(input())
for tt in range(t):
    l=list(map(int,input().split()))
    n,k=l[0],l[1]
    l=list(map(int,input().split()))
    d={}
    a=[]
    flag=0
    for i in l:
        if i not in d:
            d.update({i:1})
        else:
            d[i]+=1
    for i in l:
        if d[i]==k:
            print(i,end='\n')
            flag=1
            break
    if flag!=1:
        print(-1)