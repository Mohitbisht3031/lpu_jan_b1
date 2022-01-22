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

  int arr[] = {50,60,70,80,90,100,52,45};

  // *arr == arr[0];
  // arr == &arr[0];

  if(*(arr+1) == arr[1]){
    cout<<"hey"<<endl;
  }else{
    cout<<"hi"<<endl;
  }

  // cout<<arr[5]<<endl;

  // display(arr,9);

  // for(int i = 0;i<5;i++)cin>>arr[i];
  return 0;
}