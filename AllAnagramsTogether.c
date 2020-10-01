#include<stdio.h>
#include<string.h>
int main(){
	int i,j,sum1=0,sum2=0,k,n,a[5]={0};
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
	}
	for(i=0;i<n-1;i++){
		if(a[i]==1){
			continue;
		}
		a[i]=1;
		for(j=0;j<strlen(s[i]);j++){
			sum1+=s[j];
		}
		for(j=i+1;j<n;j++){
			if(a[j]==1){
				continue;
			}
			for(k=0;k<strlen(s[j]);k++){
				sum2+=s[k];
			}
			if(sum1==sum2){
				printf("sum1 and sum2 are equal\n");
				printf("%s %s\n",s[j],s[i]);
				a[j]=1;
			}
			sum2=0;
		}
		sum2=0,sum1=0;
	}
}