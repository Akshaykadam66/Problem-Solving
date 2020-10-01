// https://practice.geeksforgeeks.org/problems/minimum-platforms/0

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int t,n,i,tt,j,*a,*d;
    int p=0,*ld,data;
    scanf("%d",&t);
    for(tt=0;tt<t;tt++){
        p=0;
        scanf("%d",&n);
        a=malloc(sizeof(int)*n);
        d=malloc(sizeof(int)*n);
        ld=malloc(sizeof(int)*n);
        memset(ld,0,sizeof(int)*n);
        for(i=0;i<n;i++){
            scanf("%d",a+i);
        }
        for(i=0;i<n;i++){
            scanf("%d",d+i);
        }
        j=0;
        for(i=0;i<n;i++){
            data=search(a[i],ld,n);
            if(data!=-1){
                // reuse platform!
                ld[data]=d[i];
            }else if(data==-1){
                // cannot reuse the platfrom!
                ld[j]=d[i];
                j+=1;
                p+=1; 
            }
        }
        printf("%d\n",p);
    }
}

int search(int data,int *ld,int n){
       int i;
       for(i=0;i<n;i++){
        //   can reuse the platform if true
           if(data>ld[i] && ld[i]!=0){
               return i;
           }
       }
       return -1;
}




