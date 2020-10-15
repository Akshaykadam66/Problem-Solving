print('Enter the Elements\n')
l=list(map(int,input().split()))
n = len(l)
flag=0
flag1=0
for i in range(1,n-1):
	for j in range(i+1,n):
		if l[i]>l[j]:
			flag=1
			break
	for j in range(i-1,-1,-1):
		if l[i]<l[j]:
			flag=1
			break
	if flag == 0:
		flag1=1
		print(l[i],end=' ') 
	flag=0
if flag1==0:
	print('No Element Found\n')
