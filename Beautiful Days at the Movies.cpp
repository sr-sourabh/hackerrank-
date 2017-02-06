// https://www.hackerrank.com/challenges/beautiful-days-at-the-movies

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int rev(int num)
{

    int temp;
    int rev=0;
    
    while(num)
    {
        temp = num%10;
        rev *=10;
        rev += temp;
        num /=10;
    }
    return rev;
    
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    
    int i,j,k;
    cin>>i>>j>>k;
    int count = 0;
    
    for(int t = i;t<=j;t++)
    {
        if(  (t - rev(t))%k ==0  )
            count++;
    }
    
    cout<<count;
    
    
    
    
    
    
    
    
    
    return 0;
}

