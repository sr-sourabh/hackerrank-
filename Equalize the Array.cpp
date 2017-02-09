// https://www.hackerrank.com/challenges/equality-in-a-array

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int k [100] = {0};
    int  n ;
    int a;
    cin>>n;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> a;
        k[a]++;
        //cout<<k[i]<<endl;
    }
    int max = 0 ; 
    for(int i = 0 ; i < 100 ; i++)
    {
        
        if(max< k[i])
            max = k[i];
    }
    
    cout<<n-max;
    
    
    return 0;
}

