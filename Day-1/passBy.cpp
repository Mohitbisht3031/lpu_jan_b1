#include<bits/stdc++.h>

using namespace std;

// pass by val.!
// void increment(int a){
//   a++;
//   // ++a;
//   return;
// }

// pass by pointer.!
// void increment(int *a){
//   // a++;
//   (*a)++;
//   // ++a;
//   return;
// }

// pass by refrence
void increment(int &a){
  // a++;
  // (*a)++;
  a++;
  // ++a;
  return;
}

int main(){

  int i =10;

  increment(i);

  cout<<i<<endl;
  // cout<<increment(i)<<endl;
  // int j =increment(i);
  // cout<<j<<endl;

  return 0;
}