// https://practice.geeksforgeeks.org/problems/rotate-a-linked-list/1

Node* rotate(Node* head, int k) {
    struct Node *temp,*prev;
    for(int i=0;i<k;k++){
        temp=head,prev=NULL;
        while(temp->next!=NULL){
            prev=temp;
            temp=temp->next;
        }
        temp->next=head;
        head=temp;
        prev->next=NULL;
    }
    return head;
}