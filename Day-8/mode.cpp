// #include<iostream>
#include<bits/stdc++.h>

using namespace std;

// Single
class A{
    int a;
    protected:
    int b;
    public:
    int c;

};
class B : protected A{
    // protected:
    // int b;
    //public:
    // int c;
    public:
};

int main(){
    // A obj;
    B obj;
    // cout<<obj.a<<obj.b<<obj.c;
    // cout<<obj.a<<obj.b<<obj.c<<endl;


  return 0;
}