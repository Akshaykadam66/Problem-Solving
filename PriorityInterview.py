n=int(input())
l=[]
m=[]
f=[]
for i in range(n):
    l=list(map(int,input().split()))
    if l[0] == 0:
        f.append(l[1])
    elif l[0] == 1:
        m.append(l[1])
f.sort(reverse=True)
m.sort(reverse=True)
for i in m:
    f.append(i)
for i in range(len(f)):
    print("{}".format(f[i]),end=" ")
    