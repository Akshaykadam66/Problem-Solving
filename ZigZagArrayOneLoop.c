#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,*a,i,temp,flag;
	printf("size of array\n");
	scanf("%d",&n);
	a=malloc(sizeof(int)*n);
	printf("Enter %d elements\n",n);
	for(i=0;i<n;i++){
		scanf("%d",a+i);
	}
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	flag=1;
	for(i=0;i<n-1;i++){
		if(flag==1){
			if(a[i+1]<a[i]){
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		}else if(flag==0){
			if(a[i]<a[i+1]){
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		}
		if(flag==0){
			flag=1;
		}else{
			flag=0;
		}
	}
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
}