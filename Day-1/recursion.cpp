#include<bits/stdc++.h>

using namespace std;

// iterative fun
// int power(int base,int power){
//   int n = 1;

//   for(int i = 0;i<power;i++){
//     n*=base; //n = n*base;
//   }

//   return n;
// }

// recursive fun
 int power(int base,int pow){
  //  1. Base
  // 2. assumption
  // 3. small cal.

  if(pow == 0){
    return 1;
  }

  int smlAns = power(base,pow-1);

  // cout<<smlAns*base<<endl;

  return smlAns*base;

 }

int SON(int num){ // num = 1124
  if(num == 0)return 0;

  int smlAns = SON(num/10); //num/10 = 112

  return smlAns+(num%10); //num%10 = 4
}

int main(){

  int b;
  cin>>b;

  cout<<SON(b)<<endl;

  // cout<<pow(2,b)<<endl;
  cout<<power(2,b);

  return 0;
}