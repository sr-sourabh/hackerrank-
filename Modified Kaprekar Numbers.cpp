//Problem link : https://www.hackerrank.com/challenges/kaprekar-numbers


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int kaprekar( long n)
{
    long temp = n ;
    int d = 0;
    
    do
    {
        temp /= 10;
        d++;
    }while(temp!=0);
    
    temp = n;
    temp *= temp;
    
    long fac = pow(10.0,d);   
    long t1 = temp % fac;
    long t2 = temp /(pow(10.0,d));  
    
    if((t1 + t2) == n)
        return 1;
    else return 0;

}

int main() {
    long p , q ;
    cin>>p>>q;
    int flag = 1 ;
    
    for(long i = p ; i <= q ; i++)
    {
        if(kaprekar(i))
            {
                flag = 0;
                cout<<i<<" ";
            }
    }
    if(flag)
    cout<<"INVALID RANGE";
    return 0;
}

