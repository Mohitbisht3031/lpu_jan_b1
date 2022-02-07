// #include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int>v = {1,2,3,4,5,6,7,8,9};

    for(vector<int>::iterator i = v.begin();i !=v.end();i++){
        cout<<*i<<" ";
    }
    
    for(int i = 0;i<v.size();i++)cout<<v[i]<<" ";

  return 0;
}