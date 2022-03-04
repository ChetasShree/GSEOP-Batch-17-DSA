# Take input and add it at the end
Qestion link: https://practice.geeksforgeeks.org/problems/linked-list-insertion-1587115620/1/

```
Node *insertAtEnd(Node *head, int x)  {
       // Your code here
       Node *n = new Node(x);
       if(head == NULL) return head;
       Node* t = head;
       while(head != NULL){
           head = head->next;
       }
       head->next = n;
       return t;
    }
```