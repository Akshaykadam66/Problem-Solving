#include<stdio.h>
#include<stdlib.h>
int main(){
    int t,n,k,tt,i,j,m,*a=NULL,sum;
    printf("how many test cases?\n");
    scanf("%d",&t);
    for(tt=0;tt<t;tt++){
        printf("how many elements in the array?\n");
        scanf("%d",&n);
        printf("what is the sum value\n");
        scanf("%d",&sum);
        a=malloc(sizeof(int)*n);
        if(a==NULL){
            printf("Failed to allocate memory\n");
            exit(1);
        }
        printf("enter %d values\n",n);
        for(i=0;i<n;i++){
            scanf("%d",a+i);
        }
        for(i=0;i<n-3;i++){
            for(j=i+1;j<n-2;j++){
                for(k=j+1;k<n-1;k++){
                    for(m=k+1;m<n;m++){
                        if(a[i]+a[j]+a[k]+a[m]==sum){
                            printf("%d + %d + %d + %d = 23\n",a[i],a[j],a[k],a[m]);
                        }
                    }
                }
            }
        }
    }
}