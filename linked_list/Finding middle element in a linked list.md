# Finding middle element in a linked list
Qestion link: https://practice.geeksforgeeks.org/problems/finding-middle-element-in-a-linked-list/1/

```
int getMiddle(Node *head)
    {
        Node* slow =head;
        Node* fast = head->next;
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        if(fast) return slow->next->data;
        return slow->data;
    }
```
