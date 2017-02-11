// https://www.hackerrank.com/challenges/taum-and-bday

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
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long b;
        long w;
        cin >> b >> w;
        long x;
        long y;
        long z;
        cin >> x >> y >> z;
        int cost = 0 ;
        
        
        if(x>y+z)
            b =  (y+z)*b;
        else
            b = b*x;
        if(y>x+z)
            w = w* (x+z);
        
        else
            w = w*y;
        
        cout<<b+w<<endl;
            
            
            
            
    }
    return 0;
}

