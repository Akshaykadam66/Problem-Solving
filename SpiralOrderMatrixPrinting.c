#include<stdio.h>
#include<stdlib.h>
int main(){
	int k=0,l=0,i,j,w=0,r,c;
	printf("How many row are there?\n");
	scanf("%d",&r);
	printf("How many columns are there?\n");
	scanf("%d",&c);
	int a[r][c];
	printf("Enter the matrix...\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	printf("Entered Matrix is...\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	while(l<c && k<r){
		if(w==0){
			// print the row starting from left side keeping row variable as constant!
			for(i=l;i<c;i++){
	 			printf("%d  ",a[k][i]);	
			}
			k+=1;
			w=1;
			continue;
		}
		if(w==1){
			// print the column downwards keeping column as constant!
			for(i=k;i<r;i++){
				printf("%d  ",a[i][c-1]);
			} 
			c-=1;
			w=2;
			continue;
		}
		if(w==2){
			// print the row starting from right side keeping row variable as constant!
			for(i=c-1;i>=l;i--){
				printf("%d  ",a[r-1][i]);
			}
			r-=1;
			w=3;
			continue;
		}
		if(w==3){
			// print the column upwards keeping column as constant!
			for(i=r-1;i>=k;i--){
				printf("%d  ",a[i][l]);
			}
			l+=1;
			w=0;
			continue;
		}
	}
	printf("\n");
}