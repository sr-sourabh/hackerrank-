// https://www.hackerrank.com/challenges/jumping-on-the-clouds

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
    cin >> n;
    vector<int> a(n);
    for(int i = 0;i < n;i++){
       cin >> a[i];
    }
    
    int steps = 0 ;
    
    if(n==2)
    {cout<<"1";
     exit(0);}
    for(int i = 0;i < n;)
    {
            if(a[i+2] == 0  )
            {
                i=i+2;
                steps++;
            }
        else if(a[i+1] == 0) {
                i++;
                steps++;
        }
    }
    
    cout<<steps-1;
    
    
    return 0;
}

