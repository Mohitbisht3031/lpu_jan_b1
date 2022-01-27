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

  ComplexNumber multiply(ComplexNumber c){
    // (a+ib)*(c+id) = a*c + ia*d + ib*c - b*d;

    int a = this->real*c.real;
    int b = this->real * c.img;
    int x = this->img * c.real;
    int d = this->img * c.img;

    int r = a - d;
    int i = b + x;    

    return ComplexNumber(r,i);
  }

  // return_type operator +(){

  // }

  ComplexNumber operator +(ComplexNumber c){
    int r = this->real+c.real;
    int i = this->img+c.img;

    return ComplexNumber(r,i);
  }

  void operator ++(){
    this->real-=1;
    this->img-=1;
    return;
  }

  // multiply
  // minus

};

int main(){

  ComplexNumber c1(5,5);
  ComplexNumber c2(1,1);
  ComplexNumber c3(2,2);


  // ComplexNumber c3 = c1.plus(c2); 
  // ComplexNumber c4 = c1.multiply(c2);

  ComplexNumber c4 = c1 + c2 + c3;

  c4.display();
  // c1.+(c2)
  // c3.display()
// ++
//  c2.++()
  // int a = 10;
  // ++a;
  // ++c2;
  // c2.display();

  // c1+c2/c3;
  // int a = 10;
  // int b = 20;
  // int c = a+b;

  // c1 * c2;
  // *

  // ComplexNumber c5 = c1 + c2;


  // c4.display();
  // c3.display(); //6+i6;

  return 0;
}