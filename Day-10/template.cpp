// #include<iostream>
#include<bits/stdc++.h>

using namespace std;

template <typename T>
T sum(vector<T>&v, T def = 0){
    T s = def;
    for(T b:v){
        s+=b;
    }
    return s;
}

template <typename T>
T sub(vector<T>&v){
    T s= 0;
    for(T e:v){
        s-=e;
    }
    return s;
}

// int sum(vector<int>&v){
//     int s = 0;
//     for(int b:v){
//         s+=b;
//     }
//     return s;
// }


// double sum(vector<double>&v){
//     double s = 0;
//     for(double b:v){
//         s+=b;
//     }
//     return s;
// }

int main(){
    vector<string>vs ={"templates "," are "," magical!"};
    vector<int> v ={1,2,3,4,5,6,7,8,9};
    // v[0] == v.at(0);
    // vector<double> v2 ={1.5,2.12,3.35,4.45,5.55,6.65,7.75,8.85,9.95};
    // int arr[5] = {1};
    // vector<int> arr(5,0);
    string def ="";
    cout<<sum<string>(vs,def)<<endl;
    cout<<sum<int>(v)<<endl;
    // cout<<sum<double>(v2)<<endl;
  return 0;
}