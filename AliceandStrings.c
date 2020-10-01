#include<stdio.h>
#include<string.h>
int main(){
	int i,j,flag=0,l1,l2;
	char s1[10000],s2[10000];
	scanf("%s",s1);
	scanf("%s",s2);
	l1=strlen(s1);
	l2=strlen(s2);
	if(l1==l2){
		while(1){
			for(i=0;i<l1;i++){
				if(s1[i]<s2[i]){
					s1[i]+=1;
					flag=1;
				}
			}
			if(flag!=1){
				break;
			}else{
				flag=0;
			}
		}
		if(strcmp(s1,s2)==0){
			printf("YES\n");
			printf("%s %s",s1,s2);
		}else{
			printf("NO\n");
		}
	}else{
		printf("NO\n");
	}
}