// https://practice.geeksforgeeks.org/problems/largest-number-formed-from-an-array/0

#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,j,k,t,n,*a,max,temp,kk,jj;
    char *s;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&n);
        a=malloc(sizeof(int)*n);
        s=malloc(sizeof(char)*n);
        for(j=0;j<n;j++){
            scanf("%d",a+j);
        }
        max=0;
        for(j=0;j<n-1;j++){
            for(k=j+1;k<n;k++){
                if(a[k]>=100){
                    jj=a[j]*1000;
                    jj=jj+a[k];
                    if(a[j]>=100){
                        kk=a[k]*1000;
                        kk=kk+a[j];
                    }else if(a[j]<100 && a[j]>9){
                        kk=a[k]*100;
                        kk=kk+a[j];
                    }else if(a[j]<10){
                        kk=a[k]*10;
                        kk=kk+a[j];
                    }
                }
                if(a[k]<100 && a[k]>9){
                    jj=a[j]*100;
                    jj=jj+a[k];
                    if(a[j]>=100){
                        kk=a[k]*1000;
                        kk=kk+a[j];
                    }else if(a[j]<100 && a[j]>9){
                        kk=a[k]*100;
                        kk=kk+a[j];
                    }else if(a[j]<10){
                        kk=a[k]*10;
                        kk=kk+a[j];
                    }
                }
                if(a[k]<9){
                    jj=a[j]*10;
                    jj=jj+a[k];
                    if(a[j]>=100){
                        kk=a[k]*1000;
                        kk=kk+a[j];
                    }else if(a[j]<100 && a[j]>9){
                        kk=a[k]*100;
                        kk=kk+a[j];
                    }else if(a[j]<10){
                        kk=a[k]*10;
                        kk=kk+a[j];
                    }
                }
                if(kk>jj){
                    temp=a[j];
                    a[j]=a[k];
                    a[k]=temp;
                }
            }
        }
        for(j=0;j<n;j++){
            printf("%d",a[j]);
            
        }
        printf("\n");
        
    }
}