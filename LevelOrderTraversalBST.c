#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Node{
    struct Node* left;
    struct Node* right;
    int data;
}Node;
Node* newNode(int data){
    Node* node=(Node*)malloc(sizeof(Node));
    node->left=node->right=NULL;
    node->data=data;
    return node;
}
struct Node *q[100];
int f =-1, r=-1;
void qinsert(struct Node *i)
{
        if(f && r == -1){
                r++;
                f++;
         }
        else{
                r++;
        }
        q[r]=i;
}
int isempty()
{
   if(f==-1 || f>r){
        return 1;
    }
  else{
          return 0;
  }
}
 struct Node * qdelete(){
         f++;
         return q[f-1];
 }
 void levelOrder(Node* root)
{
  //Write your code here
   struct Node *temp;
   qinsert(root);
   while(isempty()==0)
   {
     temp=qdelete();
     printf("%d ",temp->data);
     if(temp->left!=NULL)
     {
             qinsert(temp->left);
     }
     if(temp->right!=NULL)
     {
             qinsert(temp->right);
     }
   }
}  
Node* insert(Node* root,int data){
    if(root==NULL)
        return newNode(data);
    else{
        Node* cur;
        if(data<=root->data){
            cur=insert(root->left,data);
            root->left=cur;                
        }
        else{
            cur=insert(root->right,data);
            root->right=cur;
        }
        
    }
    return root;
}
int main(){
    Node* root=NULL;
    int T,data;
    scanf("%d",&T);
    while(T-->0){
        scanf("%d",&data);
        root=insert(root,data);
    }
    levelOrder(root);
    return 0;
}