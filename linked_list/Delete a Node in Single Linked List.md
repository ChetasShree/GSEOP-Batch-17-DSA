# Delete a Node in Single Linked List
Qestion link: https://practice.geeksforgeeks.org/problems/delete-a-node-in-single-linked-list/1/

```
Node* deleteNode(Node *head,int x)
{
    //Your code here
   if(x==1) return head->next;
   Node* t = head;
   int i=1;
   while(i!= x-1){
       head=head->next;
       i++;
   }
   head->next = head->next->next;
   return t;
}
```
