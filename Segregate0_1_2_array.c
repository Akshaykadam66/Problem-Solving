#include<stdio.h>
#include<stdlib.h>
int main(){
    int tt,n,*a,i,t,low,mid,high,temp;
    scanf("%d",&t);
    for(tt=0;tt<t;tt++){
        scanf("%d",&n);
        high=n-1,low=0,mid=0;
        a=calloc(n,sizeof(int));
        for(i=0;i<n;i++){
            scanf("%d",a+i);
        }
        while(mid<=high){
            if(a[mid]==0){
                temp=a[mid];
                a[mid]=a[low];
                a[low]=a[mid];
                low+=1;
                mid+=1;
            }else if(a[mid]==1){
                mid+=1;
            }else if(a[mid]==2){
              temp=a[mid];
              a[mid]=a[high];
              a[high]=temp;
              high-=1;
              if(mid==high){
                  mid+=1;
              }
            }
        }
        for(i=0;i<n;i++){
            printf("%d ",a[i]);
        }
        printf("\n");
    }
}