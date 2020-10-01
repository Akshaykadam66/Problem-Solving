n = int(input())
l=list(map(int,input().split()))
b=[]
s=0
for i in l:
    if i not in b:
        b.append(i)
    else:
        repeat=i
    s+=i
sm = n*(n+1)/2
diff = abs(sm-s)
if diff > repeat:
    ans=diff+repeat
else:
    ans=repeat-diff
print("the reapted element is %d and missing element is %d" % (repeat,ans))

    