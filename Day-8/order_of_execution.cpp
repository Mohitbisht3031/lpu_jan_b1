// #include<iostream>
#include<bits/stdc++.h>

using namespace std;

// Single
class A{
    public:

    A(){
        cout<<"A's Constructor"<<endl;
    }

    ~A(){
        cout<<"A's Destructor"<<endl;
    }

};
class B : public A{
    public:

    B(){
        cout<<"B's Constructor"<<endl;
    }

    ~B(){
        cout<<"B's Distructor"<<endl;
    }
};

int main(){
    B obj;
  return 0;
}