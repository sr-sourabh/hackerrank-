// https://www.hackerrank.com/challenges/happy-ladybugs

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;



int main(){
    int Q;
    cin >> Q;
    for(int a0 = 0; a0 < Q; a0++){
        int n;
        cin >> n;
        string b;
        cin >> b;
        
        map <char , int> m;
        int f = 1;
        
        
        
        for(int i = 0 ; i <n ; i++)
        {
            
             m[b[i]]++;   
        }
        int flag = 1;
        if(m['_']== 0)
        {
                for(int i = 0 ; i <n ; i++)
                {
                     if(b[i] == b[i+1] || b[i] == b[i-1])
                         flag = 1;
                    else {flag = 0;break;}
                }
        }
        if(flag == 0)
        {cout<<"NO"<<endl;continue;}
        
        for(int i = 0 ; i <n ; i++)
        {
             if(m[b[i]] == 1  && b[i]!='_' )
             {
                 f = 0 ;
                 break;
             }
        }
        if(f==0)
        {cout<<"NO"<<endl;continue;}
        else cout<<"YES"<<endl;
        
        
    }
    return 0;
}

