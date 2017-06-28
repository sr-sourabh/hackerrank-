//https://www.hackerrank.com/challenges/drawing-book

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int n , p;
    cin>>n>>p;
    
    int t1 = p/2;
    int t2 = (n/2-p/2);
    int min = t1>=t2?t2:t1;
    cout<<min;
    
    
    
    return 0;
}

