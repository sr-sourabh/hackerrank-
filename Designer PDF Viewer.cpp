//https://www.hackerrank.com/challenges/designer-pdf-viewer

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

int n=26;
vector<int> h(n);


int height(char c)
{
    int temp=97;
    int j=0;
    for(int i = 0;i<26;i++)
    {
        if(temp == c) 
        {
            cout<<h[j];
           return h[j];
        }
        else {
                j++;
                temp++;
             }
    }
    return 0;
    
}



int main(){
    
    
    
    int max_height = 0;
    
    
    for(int h_i = 0;h_i < n;h_i++){
       cin >> h[h_i];
    }
    string word;
    cin >> word;
    max_height = h[word[0] - 'a'];
    
    for(int i = 0; i<word.length();i++)
    {
         if(h[word[i] - 'a']>max_height)
             max_height = h[word[i] - 'a']; 
    }
   cout<<max_height*word.length();
    
    return 0;
}

