print("how many elements\n")
n=int(input())
print("enter {l} elements".format(l=n))
a=list(map(int,input().split()))
print("The following are the leaders")
m = a[-1]
v=[]
v.append(m)
for i in range(n-2,0,-1):
	if a[i]>m:
		v.append(a[i])
v.reverse()
print(v)
		