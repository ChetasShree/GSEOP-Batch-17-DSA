# Take input and add it at the front
Qestion link: https://practice.geeksforgeeks.org/problems/linked-list-insertion-1587115620/1/

```
Node *insertAtBegining(Node *head, int x) {
       // Your code here
       Node* n = new Node(x);
       if(head == NULL) return n;
       n->next = head;
       head = n;
       return head;
    }
```
