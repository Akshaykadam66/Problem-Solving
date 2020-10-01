#include<stdio.h>
int main()
{
    int t,n,i,j,max,min,k,temp;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&n);
        int a[n];
        for(j=0;j<n;j++){
            scanf("%d",&a[j]);
        }
        for(j=0;j<n-1;j++){
            if(j%2==0){
                max=j;
                for(k=j+1;k<n;k++){
                    if(a[k]>a[max]){
                        max=k;
                    }
                }
                temp=a[max];
                a[max]=a[j];
                a[j]=temp;
            }
            else{
                min=j;
                for(k=j+1;k<n;k++){
                    if(a[k]<a[min]){
                        min=k;
                    }
                }
                temp=a[min];
                a[min]=a[j];
                a[j]=temp;
            }
        }
        for(j=0;j<n;j++){
            printf("%d ",a[j]);
        }
    }
}