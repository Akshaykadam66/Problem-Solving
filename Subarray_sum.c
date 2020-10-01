#include<stdio.h>
#include<stdlib.h>
int sub_array(int *,int ,int);
int main(){
    int t,n,sum,i,j,*a,result;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d %d", &n,&sum);
        a=malloc(sizeof(int)*n);
        for(j=0;j<n;j++){
            scanf("%d", &a[j]);
        }
        if(sub_array(a,n,sum) == -1){
            printf("%d\n",-1);
        }
    }
}
int sub_array(int *a,int n,int sum){
    int j,k,temp;
    for(j=0;j<n-1;j++){
        temp = a[j];
        for(k=j+1;k<n;k++){
            temp+=a[k];
            if(temp == sum){
                printf("%d %d\n",j+1,k+1);
                return 0;
            }
        }
    }
    return -1;
}