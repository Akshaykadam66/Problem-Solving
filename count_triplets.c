#include<stdio.h>
int search(int*,int,int);
int main(){
	int i,j,t,*a,n,sum,k,count=0;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%d", &n);
	    a = malloc(sizeof(int)*n);
	    for(j=0;j<n;j++){
	        scanf("%d", &a[j]);
	    }
	    for(j=0;j<n-1;j++){
	        for(k=j+1;k<n;k++){
	            sum = a[j]+a[k];
	           // search sum in entire array!
	            if(search(a,n,sum) == 1){
	                count+=1;
	            }
	        }
	    }
	    if(count!=0){
	        printf("%d\n",count);    
	    }
	    else{
	        printf("-1");
	    }
	    count = 0;
	}
}

int search(int *a,int n,int sum){
    int z;
    for(z=0;z<n;z++){
        if(a[z]==sum){
            return 1;
        }
    }
    return 0;
}