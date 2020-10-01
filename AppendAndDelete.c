#include<stdio.h>
#include<string.h>
int main(){
    char s[100],d[100];
    scanf("%s",s);
    scanf("%s",d);
    int sl=strlen(s),dl=strlen(d),k,i,j,c=0,m;
    scanf("%d",&k);
    for(j=0;j<dl;j++){
        if(s[j]==d[j]){
            c+=1;
        }else{
            break;
        }
    }
    if(c==sl && c==dl){
        if(k==sl+dl+1){
            printf("Yes");
            return 0;
        }
    }
    m=sl-c;
    m=m+(dl-c);
    if(m==k){
        printf("Yes");
    }else if(m!=k){
        printf("No");
    }
}