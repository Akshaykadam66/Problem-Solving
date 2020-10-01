#include<stdio.h>
#include<stdlib.h>
int main(){
    int t,n,*a,i,j,c=0,k=1;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&n);
        a=malloc(sizeof(int)*n);
        for(j=0;j<n;j++){
            scanf("%d",a+j);
            if(a[j]==k){
                k+=1;
            }else{
                break;
            }
        }
        printf("%d\n",k);
        k=1;
    }
}
