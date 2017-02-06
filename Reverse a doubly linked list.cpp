// https://www.hackerrank.com/challenges/reverse-a-doubly-linked-list

/*
   Reverse a doubly linked list, input list may also be empty
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/
Node* Reverse(Node* head)
{
    // Complete this function
    // Do not write the main method. 
    if(head==NULL ||head->next == NULL)
        return NULL;
    
    Node *t1,*t2;
    t1 = NULL;
    t2 = head;
    
    while(t2!= NULL)
    {
        t2->prev = t2->next;
        t2->next = t1;
        t1 = t2;
        
        t2 = t2->prev;
        
    }
    head = t1;
    return head;
}

