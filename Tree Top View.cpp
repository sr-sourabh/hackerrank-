// https://www.hackerrank.com/challenges/tree-top-view

/*
struct node
{
    int data;
    node* left;
    node* right;
};

*/

void top_view(node * root , bool b)
{
        if(root!=NULL)
        {
            if(b)
            {
                top_view(root->left,true);
                cout<<root->data<<" "; 
            }
            else
            {
                cout<<root->data<<" "; 
                top_view(root->right,false);

            }
        }
        
}

void top_view(node * root)
{
    if(root!=NULL)
    {
        top_view(root,true);
        top_view(root->right,false);
    }    
}



