//https://www.hackerrank.com/challenges/find-digits

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t,temp,count = 0,num;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        count =0;
        int n;
        cin >> n;
        num = n;
        while(num)
       {      
            temp = num%10;
            
            if(temp == 0 );
                
            
           else  if(n%temp ==0)
                count++;
            
            num = num /10;
            
        }
        
        cout<<count<<endl;
        
        
        
    }
    return 0;
}

