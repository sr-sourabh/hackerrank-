//https://www.hackerrank.com/challenges/matrix-rotation-algo

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;




int main() 
{
         
    int m , n , r;
    cin>>m>>n>>r;
    int v[m][n];
    
    for(int i = 0 ; i < m ; i ++)
    {
        for(int j = 0 ; j < n ; j ++)   
        {
            cin>>v[i][j];    
        }
    }
    
    // no. of layers
    int nol = ( (m > n) ?n:m)/2; 
    int a[nol];
    
    //store no. of elements in each layer
    for(int i = 0 ; i < nol ; i ++) 
    {
        a[i] = (m+n-2 -4*i)*2;
        //cout<<a[i]<<endl;
    }
    

    
    int layer;
    int tempr = r;
    
    for(int i = 0 ; i < m ; i ++)
    {
        
        for(int j = 0 ; j < n ; j ++)   
        {
            tempr = r;
              //identify which layer the element belongs to
              for(int k = 0 ; k < nol ; k++)
              {
                if(i == k || i == m-1-k)
                {
                    layer = k ;
                    break;
                }
                else if( j == k || j == n-1-k)
                {
                    layer = k;
                    break;
                }
              }
            tempr = tempr%a[layer];
            int ii = i ;
            int jj = j;
            
            while(tempr)
            {
              if(jj == layer && ii != layer)
              {
                  ii--;
                  tempr--;
                  continue;
              }
              else if(ii == layer && jj != n-1-layer )
              {
                  jj++;
                  tempr--;
                  continue;
              }
              else if(jj == n-1-layer && ii != m-1-layer )
              {
                  ii++;
                  tempr--;
                  continue;
              }  
              else if(ii == m-1-layer && jj != layer )
              {
                  jj--;
                  tempr--;
                  continue;
              }  
            }
            
            cout<<v[ii][jj]<<" ";
            
 
        }
        cout<<endl;
    }
    
    
    
    
    
    return 0;
}

