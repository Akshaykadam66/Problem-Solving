#include<stdio.h>
int main(){
	int k=0,c=0,n;
	printf("Enter the number\n");
	scanf("%d",&n);
	int l=n;
	 // the logic is converting zero to n is same as converting n to zero!
	while(n!=k){
		if(n%2!=0){
			n-=1;
			c+=1;
		}else{
			n/=2;
			c+=1;
		}
	}
	printf("Minimum no of Steps required to convert 0 to %d are %d\n",l,c);
}