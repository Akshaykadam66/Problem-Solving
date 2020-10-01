#include<stdio.h>
int main(){
    int i,j,k,t,n,*a,max,digit;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&n);
        a=malloc(sizeof(int)*n);
        for(j=0;j<n;j++){
            scanf("%d",a+j);
        }
        max=0;
        for(j=0;j<n;j++){
            for(k=0;k<n;k++){
                if(j==k){
                    continue;
                }
                if(a[k]>=100){
                    digit=a[j]*1000;
                    digit=digit+a[k];
                    if(max<digit){
                        max=digit;
                    }
                }else if(a[k]<100){
                    digit=a[j]*100;
                    digit=digit+a[k];
                    if(max<digit){
                        max=digit;
                    }
                }else if(a[k]<10){
                    digit=a[j]*10;
                    digit=digit+a[k];
                    if(max<digit){
                        max=digit;
                    }
                }
            }
        }
        printf("the biggest 1st integer is %d\n",max);
    }
}