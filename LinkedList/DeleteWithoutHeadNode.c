// https://www.geeksforgeeks.org/delete-a-node-from-linked-list-without-head-pointer/
void deleteNode(Node *node)
{
   node->data=node->next->data;
   node->next=node->next->next;
}
