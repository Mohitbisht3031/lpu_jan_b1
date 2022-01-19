#include<bits/stdc++.h>

using namespace std;

// 1. name of fun is same
// 2. num of parameters shld be different
  //  type of parameter shld be different


int maxi(int n1,int n2){
  if(n1>n2)return n1;
  else{
    return n2;
  }
}

int maxi(int n1,int n2,int n3){
  if(n1>n2){
    if(n1>n3)return n1;
    return n3;
  }else{
    if(n2>n3)return n2;
    return n3;
  }
}

int maxi(int a,int b,int c,int d){
  int n1 = maxi(a,b);
  int n2 = maxi(c,d);
  return maxi(n1,n2);
}

int main(){

  // int n1,

  cout<<maxi(2,3)<<endl;
  cout<<maxi(2,3,5)<<endl;
  cout<<maxi(2,3,5,4)<<endl;


  return 0;
}