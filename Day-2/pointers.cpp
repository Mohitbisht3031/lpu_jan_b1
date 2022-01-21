// #include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){

  int a = 10;
  int*ptr1 = &a;

  // cout<<a<<endl; // 10
  // cout<<ptr1<<endl; //Address of 10 or a
  // cout<<*ptr1<<endl; // 10 -> (*ptr1) == a

  int n;
  cin>>n;

  // int*arr = new int[n]; dynamic memory allocation of an array of size n

  // char ch = 'a';
  // char*ptr2 = &ch;
  // // cout<<sizeof(ptr1) <<" "<<sizeof(ptr2)<<endl;

  // int s1 = sizeof(ptr1);
  // int s2 = sizeof(ptr2);

  // if(s1 == s2){
  //   cout<<"You are good"<<endl; //this 
  // }else{
  //   cout<<"You are very good"<<endl;
  // }

  return 0;
}