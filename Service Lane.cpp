// https://www.hackerrank.com/challenges/service-lane

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    int t;
    cin >> n >> t;
    vector<int> width(n);
    for(int width_i = 0;width_i < n;width_i++){
       cin >> width[width_i];
    }
    for(int a0 = 0; a0 < t; a0++){
        int i;
        int j;
        cin >> i >> j;
        int min = 9999;
        for(int ii = i ; ii <= j ; ii++ )
        {
             if(min > width[ii])
                 min = width[ii];
        }
        cout<<min<<endl;
    }
    return 0;
}

