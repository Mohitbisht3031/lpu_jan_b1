// #include<iostream>
#include<bits/stdc++.h>

using namespace std;

void display(int arr[],int s){
  for(int i = 0;i<s;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}

int main(){

  // int arr2[4][4][4];

  int arr[4][4][4] = {
          {
           {1,2,3,4},
           {5,6,7,8},
           {9,10,11,12},
           {13,14,15,160}},
           {
           {1,2,3,4},
           {5,6,7,8},
           {9,10,11,12},
           {13,14,15,160} 
           },
           {
           {1,2,3,4},
           {5,6,7,8},
           {9,10,11,12},
           {13,14,15,160} 
           },
           {
           {1,2,3,4},
           {5,6,7,8},
           {9,10,11,12},
           {13,14,15,160} 
           } 
           };


  cout<<arr[1][3][2]<<endl;
  // display(arr[2],4);

  return 0;
}