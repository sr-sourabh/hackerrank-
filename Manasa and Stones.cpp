// https://www.hackerrank.com/challenges/manasa-and-stones

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t,n,a,b;
    cin>>t;
    for(int i = 0 ; i < t ; i++)
    {
        cin>>n>>a>>b;
        int temp;
        
        if(a==b)
        {
            cout<<a*(n-1)<<"\n";
            continue;
        }
        
        if(a<=b);
        else {
                temp = a;
                a=b;
                b=temp;
             }
        
        for(int j = 0 ; j<n ; j++)
        {
            cout<<a*(n-1-j) + b*(j)<<" ";  
        }
        cout<<endl;
    }
    return 0;
}

