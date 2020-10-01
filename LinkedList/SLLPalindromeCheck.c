// https://practice.geeksforgeeks.org/problems/check-if-linked-list-is-pallindrome/1

bool isPalindrome(Node *head)
{
    int k,d,sum=0,r,sum2=0;
    while(head!=NULL){
        sum=sum*10+head->data;
        head=head->next;
    }
    k=sum;
    while(sum>0){
        r=sum%10;
        sum2=sum2*10+r;
        sum=sum/10;
    }
    if(sum2==k){
        return 1;
    }else{
        return 0;
    }
}
