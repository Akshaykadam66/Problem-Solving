def mergesort(a,low,high):
	if low<high:
		mid=(low+high)//2
		mergesort(a,low,mid)
		mergesort(a,mid+1,high)
		merge(a,low,mid,mid+1,high)

def merge(arr,i,j,p,q):
	temp=[]
	ii=i
	pp=p
	while ii<=j and pp<=q:
		if arr[ii]<arr[pp]:
			temp.append(arr[ii])
			ii+=1
		else:
			temp.append(arr[pp])
			pp+=1

	if ii>j:
		while pp<=q:
			temp.append(arr[pp])
			pp+=1

	if pp>q:
		while ii<=j:
			temp.append(arr[ii])
			ii+=1
	k=0
	while i<=q:
		arr[i]=temp[k]
		i+=1
		k+=1


l=list(map(int,input('Enter an unsorted array..\n').split()))
n = len(l)
print('Before Sorting the Array\n')
print(l)
mergesort(l,0,n-1)
print('After Sorting the Array\n')
print(l)
