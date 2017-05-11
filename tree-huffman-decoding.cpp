//https://www.hackerrank.com/challenges/tree-huffman-decoding

/* 
The structure of the node is

typedef struct node
{
    int freq;
    char data;
    node * left;
    node * right;
    
}node;

*/



void df(node * root,string &s)
{
    if(root->left == NULL && root->right == NULL)
    {
        cout<<root->data;
        return ;
    }
 
    char m = s[0];
    if(m == '1')
        df( root->right, s.erase(0,1));
    else if(m == '0')
        df( root->left, s.erase(0,1));    
    return;
     
}
/*
         {ϕ,5}
      0 /     \ 1
     {ϕ,2}   {A,3}
    0/   \1
{B,1}  {C,1}  

S="1001011"

*/
void decode_huff(node * root,string s)
{
    node *temp = root;
    while(!s.empty() )
    {
        char m = s[0];
        
        
        if(m == '1')
            df( root->right, s.erase(0,1));
        else if(m == '0')
            df( root->left, s.erase(0,1)); 
    }
    
        
    
    
    
    
}

