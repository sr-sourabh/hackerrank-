// https://www.hackerrank.com/challenges/jumping-on-the-clouds-revisited

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
    int k;
    int i = 0;
    int e = 100;
    cin >> n >> k;
    vector<int> c(n);
    for(int c_i = 0;c_i < n;c_i++){
       cin >> c[c_i];
                
    }
    
    do{
       
       
        
        i = i + k;
        i = i % (n);
        if(c[i]==0)
            e--;
        else e -=3;
        
         
         
       
        
        
        
                
    }while(i!=0);
    
    
    cout<<e;
    
    return 0;
}

