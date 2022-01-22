#include<bits/stdc++.h>

using namespace std;

void display(int arr[],int s){
  for(int i = 0;i<s;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}

int main(){

  int size = 5;

  int arr[] = {1,2,3,4,5};
  int arr2[size];
  int r = 2;

  display(arr,size);
  
  for(int i= 0;i<5;i++){
    // arr[i+1] = arr[i];
    arr2[(i+r)%size] = arr[i];
  }

  display(arr2,size);

  return 0;
}