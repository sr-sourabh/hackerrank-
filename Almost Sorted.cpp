// https://www.hackerrank.com/challenges/almost-sorted

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long n;
    cin>>n;
    vector <long> a(n+2) ;
    
    for(long i = 1 ; i < a.size()-1 ; i++)
    {
        cin>>a[i];    
    }
    
    if(n==2 && a[1] > a[2])
    {
            cout<<"yes\nswap 1 2";
            return 0;
    }
    a[0] = 0;
    a[n+1] = 100000000;
    long up = 0 , down = 0 , pos1=-1  , pos2=0;
    
    for(long i = 2 ; i < a.size()-1 ; i++)
    {
        if(a[i]>a[i-1] && a[i] > a[i+1])
        {
            up++;
            if(up==1)
                pos1 = i;
            if(up == 2)
                pos2 = i;
        }
        if(a[i]<a[i-1] && a[i] < a[i+1])
        {
            down++;
            if(down ==2)
                pos2 = i;
            if(down == 1)
                pos2 = i;
        }
           
    }
    
    
    if(up == 0 && down == 0)
        cout<<"yes";
        
    else if (up ==2 && down == 2 )
        cout<<"yes\nswap "<<pos1<<" "<<pos2 ;
    else if(pos1 + 1 == pos2)
         cout<<"yes\nswap "<<pos1<<" "<<pos2 ;
    else if(up ==1 && down == 1)
        cout<<"yes\nreverse "<<pos1<<" "<<pos2;
    
    else cout<<"no";
    
    
    
    
    return 0;
}

