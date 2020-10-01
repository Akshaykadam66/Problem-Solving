#include<stdio.h>
#include<stdlib.h>
void main(){
    int t,tt,i,j,n,*a,min_index,max_index,temp;
    scanf("%d",&t);
    for(tt=0;tt<t;tt++){
        scanf("%d",&n);
        a=malloc(sizeof(int)*n);
        for(i=0;i<n;i++){
            scanf("%d",a+i);
        }
        int max=0,min=9999999,flag=0;
        for(i=0;i<n-2;i++){
            if(i%2==0){
                // we are in the even index
                for(j=i+1;j<n;j++){
                    if(a[j]<min){
                        flag=1;
                        min=a[j];
                        min_index=j;
                    }
                }
                if(flag==1){
                    temp=a[i];
                    a[i]=a[min_index];
                    a[min_index]=temp;
                }
            }
            if(i%2!=0){
                // we are in the odd index
                for(j=i+1;j<n;j++){
                    if(a[j]>max){
                        max=a[j];
                        max_index=j;
                        flag=1;
                    }
                }
                if(flag==1){
                    temp=a[i];
                    a[i]=a[max_index];
                    a[max_index]=temp;
                }
            }
            flag=0,max=0,min=99999999;
        }
        for(i=0;i<n;i++){
            printf("%d ",*(a+i));
        }
        printf("\n");
    }
}










