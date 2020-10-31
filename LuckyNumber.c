#include<stdio.h>
#include<stdlib.h>
int main(){
	int *a,i,n,lucky,c=2,len;
	printf("How many integers?\n");
	scanf("%d",&n);
	a=calloc(n,sizeof(int));
	printf("Enter %d elements\n",n);
	for(i=0;i<n;i++){
		scanf("%d",a+i);
	}
	len=n;
	printf("Enter Lucky element?\n");
	scanf("%d",&lucky);
	while(c<len){
		for(i=0;i<n;i++){
			if((i+1)%c==0){
				a[i]=-1;
				len-=1;
			}
		}
		c++;	
	}
	for(i=0;i<n;i++){
		if(a[i]==lucky){
			printf("%d is a lucky element\n",lucky);
			return 0;
		}
	}
	printf("%d is not a lucky element\n",lucky);
	return 1;
}