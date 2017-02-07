// https://www.hackerrank.com/challenges/sherlock-and-squares

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    
    int t; 
    cin >>t;
    float n=0;
    int count = 0 ;
    float a,b;
    
    for(int  i = 0 ; i<t ; i++)
    {
        
        int count = 0 ;
        cin>> a>>b;
        for( int j = a;j<=b;j++)
        {
                if( floor(sqrt(j)) == sqrt(j) )
                {
                    n = sqrt(j);
                    
                    break;
                }
        }
         
        
        while(n*n<=b&&n*n>=a)
        {
                count++;
                n++;
        }
        
        cout<<count<<endl;
    }
    
    
    
    
   
    
    return 0;
}

