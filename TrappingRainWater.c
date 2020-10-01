#include<stdio.h>
int main(){
    int i,j,*a,n,t,w=0;
    int max,max2;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&n);
        a=malloc(sizeof(int)*n);
        for(j=0;j<n;j++){
            scanf("%d",a+j);
        }
        // check your 2nd largest element
        max=0,max2=0;
        for(j=0;j<n;j++){
            if(a[j]>max){
                max2=max;
                max=a[j];
            }else if(a[j]>max2 && a[j]<max){
                max2=a[j];
            }
        }
        // printf("max is %d and max2 is %d\n",max,max2);
        // check for water blocks
        for(j=0;j<n-1;j++){
            if(a[j]<=max2){
                 w+=abs(a[j]-max2);
            }
        }
        printf("%d\n",w);
        w=0;
    }
}