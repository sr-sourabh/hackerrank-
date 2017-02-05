// https://www.hackerrank.com/challenges/beautiful-triplets

#include <cmath>
#include <cstdio>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,d;
    cin>>n>>d;
    map <int , bool> m;
    vector <int> a(n);
    int t;
    int count = 0;
    
    for(int i = 0 ; i < n ; i++){
        cin>>a[i];
        m[a[i]] = 1;
    }
    
    for(int i = 0 ; i < n ; i++){
        if(m[a[i]+d] == 1 && m[a[i]+2*d] == 1)
            count++;
    }
    cout<<count;
    
    return 0;
}

