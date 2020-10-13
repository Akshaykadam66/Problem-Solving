#include<stdio.h>
#include<string.h>
int main()
{
	int t,tt,j,a[256],flag=0;
	char s[100000];
	scanf("%d",&t);
	for(tt=0;tt<t;tt++){
	    scanf("%s",s);
	    memset(a,0,sizeof(int)*256);
	    for(j=0;j<strlen(s);j++){
	        if(a[s[j]]==0){
	            a[s[j]]=1;
	        }else if(a[s[j]]==1){
	            printf("%c\n",s[j]);
	            flag=1;
	            break;
	        }
	    }
	    if(flag!=1){
	        printf("-1\n");
	    }
	    flag=0;
	}
	return 0;
}