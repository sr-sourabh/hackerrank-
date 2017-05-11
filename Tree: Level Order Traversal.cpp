// https://www.hackerrank.com/challenges/tree-level-order-traversal

#include<queue>  

/* 
    
    class node 
       int data;
       Node left;
       Node right;
   */
   void LevelOrder(node *root)
    {
        queue <node*> q;
        node *temp = root;
    
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            if(temp->left !=NULL)
                 q.push(temp->left);
            if(temp->right !=NULL)
                 q.push(temp->right);
            
            temp = q.front();
            q.pop();
           
        }
        
      
    }

