// https://www.hackerrank.com/challenges/chocolate-feast

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int c;
        int m;
        cin >> n >> c >> m;
        
        int choc = n/c;
        int wrapper = n/c;
        int wrapchoc = 0;
        while(wrapper>=m)
        {
            wrapchoc = wrapper/m;
            choc +=  wrapchoc ;
            wrapper = wrapchoc + wrapper  % m ;
            
        }
        cout<<choc<<endl;
        
    }
    return 0;
}

