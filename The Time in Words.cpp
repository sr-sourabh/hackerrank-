// https://www.hackerrank.com/challenges/the-time-in-words

#include <cmath>
#include <cstdio>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int h;
    cin >> h;
    int min;
    cin >> min;
    
    map <int ,string> m ;
    m[1] = "one";
    m[2] = "two";
    m[3] = "three";
    m[4] = "four";
    m[5] = "five";
    m[6] = "six";
    m[7] = "seven";
    m[8] = "eight";
    m[9] = "nine";
    m[10] = "ten";
    m[11] = "eleven";
    m[12] = "twelve";
    m[13] = "thirteen";
    m[14] = "fourteen";
    m[15] = "quarter";
    m[16] = "sixteen";
    m[17] = "seventeen";
    m[18] = "eighteen";
    m[19] = "nineteen";
    m[20] = "twenty";
    m[21] = "twenty one";
    m[22] = "twenty two";
    m[23] = "twenty three";
    m[24] = "twenty four";
    m[25] = "twenty five";
    m[26] = "twenty six";
    m[27] = "twenty seven";
    m[28] = "twenty eight";
    m[29] = "twenty nine";
    m[30] = "half";
      
    if(min<= 30)
    {
        if(min == 0 )                              cout<<m[h]<<" o' clock";
        else if (min == 1)                         cout<<m[min]<<" minute past "<<m[h];
        else if (min ==15 || min == 30)            cout<<m[min]<<" past "<<m[h];
        else                                       cout<<m[min]<<" minutes past "<<m[h];  
    }
    else
    {
        min = 60 - min;
        if (min == 1)                         cout<<m[min]<<" minute to "<<m[h+1];
        else if (min ==15 )            cout<<m[min]<<" to "<<m[h+1];
        else                                       cout<<m[min]<<" minutes to "<<m[h+1];     
    }
    
    
    return 0;
}

