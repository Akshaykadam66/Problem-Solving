#include<stdio.h>
#include<string.h>
int main(){
	int i,j,data,c=0,prefix=0,n,len,minlen=999999;
	char s[5][30];
	printf("enter the total number of strings\n");
	scanf("%d",&n);
	while(n>5){
		printf("total number of strings should less than 5\n");
		printf("enter the total number of strings\n");
		scanf("%d",&n);
	}
	printf("enter %d strings\n", n);
	for(i=0;i<n;i++){
		scanf("%s",s[i]);
		len = strlen(s[i]);asdfasdfasdfasdf
		if(len<minlen){
			minlen= len;
		}
	}
	for(i=0;i<minlen;i++){
		data = s[0][i];
		for(j=0;j<n;j++){
			if(data==s[j][i]){
				c+=1;
			}
		}
		if(c==n){
			prefix+=1;
		}
		c=0;
	}
	printf("Largest number of common charcter in the prefix is %d\n",prefix);
	for(i=0;i<prefix;i++){
		printf("%c",s[0][i]);
	}
}