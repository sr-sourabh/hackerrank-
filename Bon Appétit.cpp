// https://www.hackerrank.com/challenges/bon-appetit

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    
    int k , n , b,sum =0,c;
    vector <int> a;
    cin>>n>>k;
    
    for(int i = 0;i<n;i++)
     { 
        cin>>c;
        a.push_back(c);
        //if(i!=k)
        sum +=a[i];
        
        
     }
    sum = sum - a[k];
    sum = sum /2;
    
    cin>>b;
    
    if(sum == b)
        cout<<"Bon Appetit";
    else
         cout<<(b-sum);
    
    
    
    
    
    
    
    return 0;
}

