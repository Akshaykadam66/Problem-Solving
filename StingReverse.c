#include<stdio.h>
int main(){
    int t,n,i,j,l,end;
    char s[2000],c;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",s);
        l=strlen(s);
        end = l;
        end-=1;
        for(j=0;j<=end;j++){
            c=s[end];
            s[end]=s[j];
            s[j]=c;
            end-=1;
        }
        printf("%s\n",s);
    }
}