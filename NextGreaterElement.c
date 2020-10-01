 #include<stdio.h>
#include<stdlib.h>
int main()
{
    int q,n,*a,i,j,m,f=0;
    scanf("%d",&q);
    for(m=0;m<q;m++){
        scanf("%d",&n);
        a=malloc(sizeof(int)*n);
        for(i=0;i<n;i++){
            scanf("%d",a+i);
        }
        for(i=0;i<n;i++){
            if(i==n-1){
                printf("%d\n",-1);
                break;
            }
            for(j=i+1;j<n;j++){
                if(a[j]>a[i]){
                    printf("%d ",a[j]);
                    f=1;
                    break;
                }
            }
            if(f!=1){
                printf("%d ",-1);
            }
            f=0;
        }
    }
    
}