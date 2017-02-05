https://www.hackerrank.com/challenges/mini-max-sum

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
    
    
    long int a[5];
    cin>>a[0];
    long int sum;
    long int max=a[0],min=a[0];
    
    sum = a[0];
    
    for(int i = 1 ; i<5 ; i++)
    {
        cin>>a[i];
        sum = sum + a[i];
        if(a[i]>max)
            max=a[i];
        if(a[i]<min)
            min=a[i];
        
    }
    cout<<sum-max<<" "<<sum-min;
    
    
    return 0;
}

