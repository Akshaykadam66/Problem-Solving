#include<stdio.h>
int main(){
	int t,n,k,value=0,sub,i,j,a;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d %d",&n,&k);
		for(j=0;j<n;j++){
			scanf("%d",&a);
			if(a<k){
				sub=k-a;
				if(sub>value){
					value=sub;
				}
			}
		}
		printf("%d\n",value);
		value=0;
	}
}