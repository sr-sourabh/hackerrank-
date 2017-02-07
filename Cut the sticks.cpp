// https://www.hackerrank.com/challenges/cut-the-sticks

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int mini(vector <int> a)
{
   
    int min = 9999 ;
    for(int  i = 0 ; i <a.size() ; i++)
    {
        if(min > a[i])
            min = a[i];
    }
    return min;
}

void cut(vector < int > &a )
{
    int min = mini(a);
    int f = 0;
    int  n = a.size();
    for(int i = 0 ; i < a.size() ; i++)
    {
        
        a[i] = a[i] - min;
        
        if(a[i] == 0){
            a.erase(a.begin() + i );            
            i--;
            
        }
        
            
    }
    
}

int main(){
    int n;
    cin >> n;
    
    int min =0;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
        
    }
    
    /*arr.erase(arr.begin() + arr.size()-1);
    for(int arr_i = 0;arr_i < arr.size();arr_i++){
       cout<<arr[arr_i]<<endl;
        
    }*/
   
    while(arr.size()!=0)
    {
        cout<<arr.size()<<endl;
        cut(arr);
        
            
    }
    
    
    
    return 0;
}

