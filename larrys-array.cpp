// https://www.hackerrank.com/challenges/larrys-array

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int big1=0 , big2 =0 , big3=0;






int main() {
    
    int t ;
    cin >>t;
    
    for(int i = 0 ; i < t ; i++)
    {
        //big1=0 ;
        //big2 =0;
        
        int n ;
        int flag = 0;
        cin >> n ;
        int a[n];
        
        for(int j = 0 ; j < n ; j++)
        {
            cin>>a[j];    
        }
        
        int ans = 0;
       
        
        for(int j = 0 ; j < n ; j++)
        {
            for(int k = j+1 ; k < n ; k++)
            {
                if(a[j] > a[k])
                    ans++;
            }
        }
        if(ans%2 == 1)
            cout<<"NO"<<endl;
        else 
            cout<<"YES"<<endl;
        
    }
    
    
    return 0;
}

