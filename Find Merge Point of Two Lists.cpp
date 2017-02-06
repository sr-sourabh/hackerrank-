// https://www.hackerrank.com/challenges/find-the-merge-point-of-two-joined-linked-lists

/*
   Find merge point of two linked lists
   Node is defined as
   struct Node
   {
       int data;
       Node* next;
   }
*/
int FindMergeNode(Node *headA, Node *headB)
{
    // Complete this function
    // Do not write the main method.
    Node *t1 , *t2 ;
    t1 = headA;
    t2 = headB;
    while(t1!=t2)
    {
        if(t1 == NULL)
            t1 = headB;
        else t1 = t1->next;
        if(t2 == NULL)
            t2 = headA;
        else t2 = t2->next;
        
    }
    return t1->data;
}

