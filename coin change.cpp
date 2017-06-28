// https://www.hackerrank.com/challenges/coin-change/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    long n , m ;
    cin>>n>>m;
    
    long  am[n+1]={0};

    am[0] = 1;
    

    
    for(int i = 0 ; i < m ; i++)
    {   
        int c;
        cin>>c;
        
        for(int j = 1 ; j < n+1 ; j++)
        {
            if( j >= c)
            {
                am[j] += am[j-c];

            }
            
        }

    }
    cout<<am[n];
    
    
    return 0;
}

