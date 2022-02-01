// #include<iostream>
#include<bits/stdc++.h>

using namespace std;

class A{
    public:
    A(){
        cout<<"cons called"<<endl;
    }

    ~A(){
        cout<<"Des called"<<endl;
    }

};

int main(){
    // A a;
    A*a = new A[5];

    delete[] a;
    // delete a;

  return 0;
}