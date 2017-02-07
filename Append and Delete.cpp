// https://www.hackerrank.com/challenges/append-and-delete

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
    string t;
    cin >> t;
    int k;
    cin >> k;
    
    int common = 0;
    
    for(int i = 0 ; i< t.size() && s.size() ; i++)
        {
        if(t[i] ==s[i])
            common++;
        else break;
    }
    
    int l1 = t.size();
        int l2 = s.size();
    
    if((t.size() + s.size() - 2*common) > k)
        cout<<"No";
    else if( (t.size() + s.size() - 2*common)%2 == k%2 )
        cout<<"Yes";
        
    else if((l1 + l2  - k) <0)
        cout<<"Yes";
        
     else cout<<"No";
        
    //  cout<<endl<< (l1 + l2  - k);
      //  cout<<endl<<s.size();
    
    
    
    
    return 0;
}

