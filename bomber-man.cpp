// https://www.hackerrank.com/challenges/bomber-man

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    
    int n , c,r ;
    char a[300][300];
    cin>>r>>c>>n;
    char a1[300][300] ={0};
    
    for(int i = 0 ; i<r ; i++)
        {   
            for(int j = 0 ; j < c ; j++)
            {
                cin>>a[i][j];
            }
        }
    
    if(n==1)
    {
     for(int i = 0 ; i<r ; i++)
        {   
            for(int j = 0 ; j < c ; j++)
                cout<<a[i][j];
            cout<<endl;
        }    
        exit(0);
    }
    
    if(n%2 == 0 )
        for(int i = 0 ; i<r ; i++)
        {   
            for(int j = 0 ; j < c ; j++)
                cout<<"O";
            cout<<endl;
        }
    
    
    
    
    {   
        for(int i = 0 ; i<r ; i++)
        {   
           
            for(int j = 0 ; j < c ; j++)
                {
                    if(a[i][j] == 79)
                    {    
                        //cout<<".";
                        a1[i][j] = '.';
                     
                    }
                    else if(a[i+1][j] != 79 && a[i-1][j] != 79 && a[i][j-1] != 79 && a[i][j+1] != 79 )
                    {
                        a1[i][j] = 79;
                        //cout<<"O";
                    }
                    else 
                    {
                        //cout<<".";
                        a1[i][j] = '.';
                        
                    }
                }
             //cout<<endl;
        }    
    }
    
   if(n%4 == 3)
   for(int i = 0 ; i<r ; i++)
        {   
            for(int j = 0 ; j < c ; j++)
                cout<<a1[i][j];
            cout<<endl;
        }
    
    else if(n%4 == 1)
    {   
        for(int i = 0 ; i<r ; i++)
        {   
           
            for(int j = 0 ; j < c ; j++)
                {
                    if(a1[i][j] == 79)
                    {    
                        cout<<".";
       
                     
                    }
                    else if(a1[i+1][j] == 79 || a1[i-1][j] == 79 || a1[i][j-1] == 79 || a1[i][j+1] == 79 )
                    {
                        
                        cout<<".";
                    }
                    else 
                    {
                        cout<<"O";
                       
                    }
                }
             cout<<endl;
        }    
    }
    
    
    
    
    return 0;
}

