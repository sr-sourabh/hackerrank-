// https://www.hackerrank.com/challenges/repeated-string

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
    string s;
    cin >> s;
    long n,n1;
    cin >> n;
    n1 = n;
    
    
    n = n / s.size() ;
    long long int count = 0 ;
    long long int t=0;
    
    for(int i = 0 ; i <s.size() ; i++)
    {
         if(s[i]=='a')
             count++;
    }
    t = count;
    count = 0 ;
    
    for(int i = 0 ; i <n ; i++)
    {
        count += t;
    }
    
    for(int  i = 0 ; i < n1%s.size();i++)
    {
        if(s[i] == 'a')
            count++;
    }
    
    
    
    cout<<count;
    return 0;
}

