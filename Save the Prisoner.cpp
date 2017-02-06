// https://www.hackerrank.com/challenges/save-the-prisoner

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    long   s,t,m,n,temp;    
    
    cin>>t;
    
    for(int i =0 ; i< t ; i++ )
    {
        cin >>n>>m>>s;
        
        
        temp = (m+s-1)%n;
       if(temp == 0)
          cout<<n<<endl;
      else
         cout<<temp<<endl;
        
    }
    
    
    
    return 0;
}

