#include<stdio.h>
#include<string.h>
int main(){
	int i,j,k,n;
	char s[50];
	printf("Enter string\n");
	scanf("%s",s);
	printf("%s\n",s);
	n = strlen(s);
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(s[i]==s[j]){
				for(k=j;k<n-2;k++){
					s[k]=s[k+1];
				}
				n-=1;
				s[n]='\0';
			}
			// j-=1;
		}
	}
	printf("After removing duplicates\n");
	printf("%s\n", s);
}