int getMiddle(Node *head)
{
    if(head==NULL){
        return -1;
    }
   struct Node *temp=head;
   int c=0,k=0;
   while(temp->next!=NULL){
       temp=temp->next;
       c+=1;
   }
   temp=head;
   while(k<c/2){
       temp=temp->next;
       k+=1;
   }
   if(c%2==0){
       return temp->data;
   }else{
       return temp->next->data;
   }
}