#include<stdio.h>
#include<stdlib.h>
int main(){
	int t,n,i,j,k,v,value=999999,*a;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d",&n);
		a=malloc(sizeof(int)*n);
		for(j=0;j<n;j++){
			scanf("%d",a+j);
		}
		for(j=0;j<n-1;j++){
			for(k=j+1;k<n;k++){
				v=(a[j]&a[k])^(a[i]|a[k]);
				if(v<value){
					value=v;
				}
			}
		}
		printf("%d\n",value);
		value=999999;
	}

}