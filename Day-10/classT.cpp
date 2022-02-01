// #include<iostream>
#include<bits/stdc++.h>

using namespace std;

template <typename T1,typename T2>
class Cal{
    public:
    T1 x;
    T2 y;

    T1 sum(){
        return this->x+this->y;
    }

    T1 sub(){
        return this->x - this->y;
    }

};

int main(){
    Cal<int,int>c1;
    Cal<int,double>c2;
    Cal<double,int>c3;
    
  return 0;
}