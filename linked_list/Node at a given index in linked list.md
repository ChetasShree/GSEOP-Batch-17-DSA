# Node at a given index in linked list
Qestion link: https://practice.geeksforgeeks.org/problems/node-at-a-given-index-in-linked-list/1/

```
int GetNth(struct node* head, int i){
  // Code here
  if(i==1) return head->data;
  i--;
  while(i--){
      head = head->next;
  }return head->data;
}
```
