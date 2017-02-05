// https://www.hackerrank.com/challenges/between-two-sets

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
    int n;
    int m;
    int flag=1,count=0;
    int max_b=0;
    int min_a=9999;
    cin >> n >> m;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
        if(min_a>a[a_i])
            min_a = a[a_i];
    }
    vector<int> b(m);
    for(int b_i = 0;b_i < m;b_i++){
       cin >> b[b_i];
        if(max_b<b[b_i])
            max_b = b[b_i];
    }
    
    for(int i = min_a;i<=max_b;i++)
    {
        
        for(int a_i = 0;a_i < n;a_i++)
        {
            if(i%a[a_i]!=0)
            { 
                flag=0;
                //cout<<"i : "<<i<<"  a[a_i]: "<<a[a_i]<<" "<<flag<<endl;
            }
        }
        
        for(int b_i = 0;b_i < m;b_i++)
        {
            if(b[b_i]%i!=0)
            { 
                flag=0;
              //  cout<<"i : "<<i<<"  b[b_i]: "<<b[b_i]<<" "<<flag<<endl;
            }
        }
        if(flag==1)
            count++;
        flag =1;
        
            
    }
    
    cout<<count;
    return 0;
}

