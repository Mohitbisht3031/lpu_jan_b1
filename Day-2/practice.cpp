// #include<iostream>
#include<bits/stdc++.h>

using namespace std;

// put every 0 in  the array to right without affecting the relative sequence. eg: [1,0,2,0,3,0,5,6] -> [1,2,3,5,6,0,0,0]

// void shift(vector<int>&arr){
//   vector<int>temp;

//   for(int i = 0;i<arr.size();i++){
//     if(arr[i] != 0){
//       temp.push_back(arr[i]);
//     }
//   }

//   int d = arr.size() - temp.size();

//   for(int i = 0;i<d;i++)temp.push_back(0);
// }

void shift(vector<int>&arr){
  int c = 0;

  for(int i = 0;i<arr.size();i++){
    if(arr[i] == 0){
      c++;
    }else{
      arr[i-c] = arr[i];
    }
  }

  for(int i = arr.size()-c;i<arr.size();i++){
    arr[i] = 0;
  }

  return ;
}

int main(){
  vector<int>arr = {1,0,2,0,3,0,5,6};

  shift(arr);

  return 0;
}