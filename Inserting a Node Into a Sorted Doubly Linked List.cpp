// https://www.hackerrank.com/challenges/insert-a-node-into-a-sorted-doubly-linked-list

/*
    Insert Node in a doubly sorted linked list 
    After each insertion, the list should be sorted
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/
Node* SortedInsert(Node *head,int data)
{
    // Complete this function
   // Do not write the main method. 
    Node *t = new Node;
    t->next = NULL;
    t->prev = NULL;
    t->data = data;
    
    if(head == NULL)
    {
        head = t;
        return head; 
    }   
    
    if(data<= head->data)
    {
        t->next = head;
        head->prev = t;
        head = t;
        return head;
    }
    
    Node *t1 = head;
    while( t1->next!=NULL)
    {
        if(data <= t1->data)
        {
            t->prev = t1->prev;
            t1->prev->next = t;
            t->next = t1;
            t1->prev = t;  
            return head;
        }
        
        t1 = t1->next;    
    }
    
    //for last node check again
    if(data <= t1->data)
    {
        t->prev = t1->prev;
        t1->prev->next = t;
        t->next = t1;
        t1->prev = t;  
        return head;
    }
    else
    {
        t1->next = t;
        t->prev = t1; 
        return head;
    }
   
}

