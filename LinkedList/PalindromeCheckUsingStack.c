#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
int main(){
	int i,j,n,d,t,flag=0;
	struct node *newnode,*head=NULL,*temp=NULL;
	printf("how many elements are there in the linked list\n");
	scanf("%d",&n);
	t=n;
	struct node *a[n];
	printf("Enter %d elements\n",n);
	while(t--){
		scanf("%d",&d);
		newnode=malloc(sizeof(struct node));
		newnode->data=d;
		newnode->next;
		if(head==NULL){
			head=newnode;
		}else{
			temp=head;
			while(temp->next!=NULL){
				temp=temp->next;
			}
			temp->next=newnode;
		}
	}
	// printf("Elements are\n");
	// temp=head;
	// while(temp!=NULL){
	// 	printf("%d ",temp->data);
	// 	temp=temp->next;
	// }
	printf("\n");
	temp=head;
	i=0;
	while(temp!=NULL){
		a[i++]=temp;
		temp=temp->next;
	}
	temp=head;
	i=n-1;
	while(temp!=NULL){
		if(temp->data!=a[i--]->data){
			printf("It's not a palindrome\n");
			flag=1;
			break;
		}
		temp=temp->next;

	}
	if(flag==0){
		printf("It's a palindrome\n");
	}
}