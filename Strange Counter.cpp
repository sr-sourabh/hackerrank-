// https://www.hackerrank.com/challenges/strange-code/forum

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
    long long t;
    cin >> t;
    
    long long o = 3;
    long long i = 6;
    
    while(o<t)
    {
        o=o+i;
        i=i*2;
    }
    cout<<(o-t)+1;
    
    
    return 0;
}

