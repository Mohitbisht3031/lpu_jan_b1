// #include<iostream>
#include<bits/stdc++.h>

using namespace std;

class student{
  
  int age;
  string name;
  string id;

  protected:
  string passcode;
  public:

  void init(string n,string i ,int a){
    age = a;
    name = n;
    id = i;
  }

  void intro(){
    cout<<"My name is" <<name<<",my age is"<<age<<" "<<"my id is "<<id<<endl;
  }



};

int main(){

  // student s1;
  // s1.init("Mohit","1",10);
  // s1.age = 10;
  // s1.name = "Mohit";
  // s1.id = "1";

  // s1.intro();

  return 0;
}