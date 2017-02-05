// https://www.hackerrank.com/challenges/sock-merchant

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
    int n,count=0;
    cin >> n;
    vector<int> c(n);
    for(int c_i = 0;c_i < n;c_i++){
       cin >> c[c_i];
    }
    
    
    for(int c_i = 0;c_i < c.size();c_i++){
       for(int c_j = c_i+1;c_j < c.size();c_j++)
           {
                if(c[c_i] == c[c_j])
                  {
                    count++;
                  // c.erase(c.begin()+c_i);
                    c.erase(c.begin()+c_j);
                    break;
                    
                  }
       }
    }
    
    cout<<count;
    
    
    return 0;
}

