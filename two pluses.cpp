//https://www.hackerrank.com/challenges/two-pluses

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


string s[20];
int ui, uj , li,lj;

int check ( int ii , int jj)
{
    int a = 1;
    int i = 1;
      while(1)
      {
          if(ii-i >=0 && jj - i >=0)
          {
              if(s[ii-i][jj] =='G' && s[ii+i][jj] =='G' && s[ii][jj-i] =='G' && s[ii][jj+i] =='G' )  
              {
                  a += 4;
                  i++;
              }
              else 
              {
                  return a;
              }
          }
          else return a;
          
      }
}



int main() {
   
    
    int n , m;
    cin >>n>>m;
    int big1 = 0 , big2 = 0;
    int ans = 1;
    
    for(int i = 0 ; i < n ; i ++)
    {
      cin>>s[i];   
    }
    
    
    
   
    for(int i = 1 ; i < n-1 ; i ++)
    {
      for(int j = 0 ; j < m ; j ++)
      {
          if (s[i][j] == 'G')    
          {
              int area = check(i,j);
              {
                  big1 = area; 
                  int len = (area/2+1)/2;
                  li = i;
                  lj = j-len;
                  ui = i-len;
                  uj = j;
                  
                  int len1 = big1/2 +1;
                  for(int i = 0 ; i< len1 ; i++)
                  {
                      s[li][i+lj] = 'L';
                      s[i+ui][uj] = 'L';
                  }
                  
              }
        for(int mi = 1 ; mi < n-1 ; mi ++)
        {
          for(int mj =1 ; mj < m-1 ; mj ++)
          {              
              if (s[mi][mj] == 'G')    
              {
                  int area = check (mi , mj);
                  int sa = area * big1;
                  if(sa > ans)
                      ans = sa;
              }
          }        
        }
              
                  int len1 = big1/2 +1;
                  for(int i = 0 ; i< len1 ; i++)
                  {
                      s[li][i+lj] = 'G';
                      s[i+ui][uj] = 'G';
                  }
  
    }
      }}

   
    cout<<ans;
    
    return 0;
}

