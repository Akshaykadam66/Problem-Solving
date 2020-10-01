// https://practice.geeksforgeeks.org/problems/reverse-array-in-groups/0

#include<stdio.h>
#include<stdlib.h>
int main(){
    int t,i,j,n,k,*a,last;
    int m=0,p,r=0,x,y,limit;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d %d",&n,&k);
        a=malloc(sizeof(int)*n);
        for(j=0;j<n;j++){
            scanf("%d",a+j);
        }
        m=0,r=0;
        if(k>1){
            while(1){
                limit=(m+k)-1;
                if(limit<n){
                    last=a[limit];
                    for(p=limit;p>m;p--){
                        a[p]=a[p-1];
                    }
                    a[p]=last;
                    m=m+k;
                }else if(limit>=n){
                    r=n%k;
                    limit=(m+r)-1;
                    last=a[limit];
                    for(p=limit;p>m;p--){
                        a[p]=a[p-1];
                    }
                    a[p]=last;
                }
                if(r!=0){
                    break;
                }
            }
        }
        for(y=0;y<n;y++){
            printf("%d ",a[y]);
        }
        printf("\n");
    }
}