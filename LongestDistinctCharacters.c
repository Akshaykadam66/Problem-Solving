#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int longest(char *s, int n,int i);
int main(){
    int large=0,t,tt,i,n,a[26],max,j;
    char s[10000];
    scanf("%d",&t);
    for(tt=0;tt<t;tt++){
        scanf("%s",s);
        n=strlen(s);
       for(i=0;i<n-1;i++){
            max=1;
            memset(a,0,sizeof(int)*26);
            a[s[i]-'a']=1;
            for(j=i+1;j<n;j++){
                if(a[s[j]-'a']==0){
                    max+=1;
                    a[s[j]-'a']=1;
                }else{
                    break;
                }
            }
            if(max>large){
                large=max;
            }
        }
        printf("%d\n",large);
    }
}
