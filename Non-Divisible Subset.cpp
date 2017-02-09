// https://www.hackerrank.com/challenges/non-divisible-subset

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   
    long long int k , n;
    cin>>n>>k;
    int big = 0;
    
    long long int k1[k] = {0};
    
    
    
    vector <long long int > a(n);
    for(int i = 0 ; i <a.size()  ; i++)
        cin>>a[i];
        
    
    
    
    
    
    for(int i = 0 ; i <a.size()  ; i++)
    {
        k1[ a[i]% k ]++ ;   
        
    }
    
    int t1,t2,count = 0 ;
    for(int i = 1 ; i <k  ; i++)
    {
          
           
            if(i == k-i)
            {
                count +=2;
            }
        else
        count = count + max(k1[i],k1[k-i]);
        
    }
    count= count/2;
     if(k1[0]!= 0 )
         count++;
     
    cout<<count;
    return 0;
}

