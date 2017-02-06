// https://www.hackerrank.com/challenges/strange-advertising

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int n,sum =0;
    cin>>n;
    int i =5;
    
    while(n--)
    {
            sum += (i/2);
        
            i = (i/2)*3;
    }
    
    cout<<sum;
    
    return 0;
}

