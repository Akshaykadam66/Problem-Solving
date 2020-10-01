n1=int(input())
l1=list(map(int,input().split()))
n2=int(input())
l2=list(map(int,input().split()))
mydict1={}
mydict2={}
for i in l1:
    if i not in mydict1:
        mydict1[i]=1
    else:
        mydict1[i]+=1
for i in l2:
    if i not in mydict2:
        mydict2[i]=1
    else:
        mydict2[i]+=1
maxx = l1 if n2 < n1 else l2
f=[]
for i in maxx:
    if i not in mydict1:
        f.append(i)
    else: 
        if mydict1[i]!=mydict2[i]:
            if i not in f:
                f.append(i)
f.sort()
for i in f:
    print("{}".format(i),end=" ")