// https://www.hackerrank.com/challenges/acm-icpc-team

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    int m;
    cin >> n >> m;
    vector<string> a(n);
    for(int i = 0;i < n;i++)
    {
       cin >> a[i];
    }
    
    int maxtopic = 0,maxteam = 0,ateam;
    
    for(int i = 0;i < n;i++)
    {
        
       for(int j = i+1;j < n;j++)
       {
           ateam = 0;
           for(int k = 0; k< m;k++)
           {
                if(a[i][k] == '1' ||a[j][k] =='1' )
                    ateam++; 
           }
           if(maxtopic <= ateam )
           {
                maxtopic = ateam;
               
           }
           
       }
           
    } 
    
    
    
    for(int i = 0;i < n;i++)
    {
        
       for(int j = i+1;j < n;j++)
       {
           ateam = 0;
           for(int k = 0; k< m;k++)
           {
               
                if( ( a[i][k] =='1' || a[j][k] == '1' )   )
                {
                    ateam++; 
                    //cout<<a[i][k]<<" "<<a[j][k]<<endl;
                }
           }
           if(maxtopic == ateam )
           {
               
                maxteam++;
               
           }
           
       }
           
    } 
    
    cout<<maxtopic<<endl<<maxteam;
    
    
    return 0;
}

