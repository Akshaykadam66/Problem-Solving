#include<stdio.h>
#include<string.h>
int main(){
	int i,j,k,n,t,tt;
	char s[50];
	printf("Enter no of string\n");
    scanf("%d",&t);
    for(tt=0;tt<t;tt++){
        scanf("%s",s);
    	n = strlen(s);
    	j=0;
    	for(i=1;i<n;i++){
    	    if(s[i]!=s[j]){
    	        j+=1;
    	        s[j]=s[i];
    	    }
    	}
    	s[j+1]='\0';
    	printf("%s\n",s);
    }
}