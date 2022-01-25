// #include<iostream>
#include<bits/stdc++.h>

using namespace std;

class ComplexNumber{
  public:

  int real;
  int img;

  ComplexNumber(int real,int img){
    this->real = real;
    this->img = img;
  }

  void display(){
    cout<<real<<"+ i"<<img<<endl;
  }

  ComplexNumber plus(ComplexNumber c){
    int r = this->real+c.real;
    int i = this->img+c.img;

    // return ComplexNumber(r,i);
    ComplexNumber res(r,i);
    return res;
  }

  // multiply
  // minus

};

int main(){

  ComplexNumber c1(5,5);
  ComplexNumber c2(1,1);

  ComplexNumber c3 = c1.plus(c2); 
  // ComplexNumber c4 = c1.multiply(c2);
  c3.display(); //6+i6;

  return 0;
}