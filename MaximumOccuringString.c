#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char max(char *s);
int main(){
	char *s;
	s=malloc(sizeof(int)*500);
	printf("Enter String\n");
	scanf("%s",s);
	printf("The character for maximum number of times is %c\n",max(s));
}

char max(char *s){
	int i,a[256]={0},max=0;
	char r;
	for(i=0;i<strlen(s);i++){
		if(a[s[i]]==0){
			a[s[i]]=1;
		}else{
			a[s[i]]+=1;
			if(a[s[i]]>max){
				max=a[s[i]];
				r=s[i];
			}
		}
	}
	return r;
}