# Reverse a linked list
Qestion link: https://practice.geeksforgeeks.org/problems/reverse-a-linked-list/1/

```
  struct Node* reverseList(struct Node *head)
    {
    Node* prev = NULL;
    Node* curr= head;
    while(curr!= NULL){
        Node* n = curr->next;
        curr->next = prev;
        prev = curr;
        curr=n;
    }return prev;
    
    }
```
