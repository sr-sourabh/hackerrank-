// https://www.hackerrank.com/challenges/lisa-workbook

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int n, k ;
    cin>>n>>k;
    
    float v;
    int page = 0 ;
    int pn,count = 0;
    
    for(int i = 1 ; i <n+1 ; i++)
    {
        cin>>v;
        //pn=0;
        for(int j=1 ;j<=ceil(v/k)  ; j++)
        {
            
            
            page++;
            //cout<<page<<endl;
            pn = (j-1) * k;
            for(int m = 1 ; m <=k ; m++)
            {
                
                pn++;
                if(pn == page)
                {
                    count++;
                    break;
                 }
                if(pn == v)
                    break;
            }
            
        }
        
        
    }
    cout<<count;
    return 0;
}

