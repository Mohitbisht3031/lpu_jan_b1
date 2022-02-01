// #include<iostream>
#include<bits/stdc++.h>

using namespace std;

class A{
    public:
    virtual void show() = 0;
    void print(){
        cout<<"printing something from base classs"<<endl;
    }

};

class B:public A{
    public:
    void show(){
        cout<<"showing something from child class"<<endl;
    }
    void print(){
        cout<<"printing something from child class"<<endl;
    }

};

int main(){

    // A a;
    B b;


    // A*b = new B;

    // b->print();
    // b->show();
    // A a;
    // B b;
    // b.show();
    // b.print();
    // a.show();
    // a.print();
  return 0;
}