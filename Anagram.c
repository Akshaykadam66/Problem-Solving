#include<stdio.h>
#include<string.h>
int main(){
    int t,*a,tt,l1,l2,i;
    char *s1,*s2;
    s1=malloc(sizeof(char)*1000000);
    s2=malloc(sizeof(char)*1000000);
    a=malloc(sizeof(int)*256);
    scanf("%d",&t);
    for(tt=0;tt<t;tt++){
        scanf("%s %s",s1,s2);
        l1=strlen(s1);
        l2=strlen(s2);
        if(l1!=l2){
            printf("NO\n");
            continue;
        }
        for(i=0;i<l1;i++){
            a[s1[i]]+=1;
            a[s2[i]]-=1;
        }
        for(i=0;i<256;i++){
            if(a[i]!=0){
                printf("NO\n");
                continue;
            }
        }
        printf("YES\n");
    }
}