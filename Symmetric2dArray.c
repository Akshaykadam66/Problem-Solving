#include<stdio.h>
char* symmetric(int n,int a[n][n]);
char y[]="YES",no[]="NO";
int main(){
    int t,n,i,j,k;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&n);
        int a[n][n];
        for(j=0;j<n;j++){
            for(k=0;k<n;k++){
                scanf("%d",&a[j][k]);
            }
        }
        printf("%s\n",symmetric(n,a));
    }
}

char* symmetric(int n,int a[n][n]){ 
    int lx=n-1,ly=n-1,j,k;
    for(j=0;j<n;j++){
        if(j==n/2){
            lx=n-1;
            ly-=1;
            continue;
        }
        for(k=0;k<n/2;k++){
            // check for x-axis!
            if(a[j][k]!=a[j][lx]){
                return no;
            }
            // check for y-axis!
            if(a[j][k]!=a[ly][k]){
                return no;
            }
            lx-=1;
        }
        ly-=1;
        lx=n-1;
    }
    return y;
}
    
