// #include<iostream>
#include<bits/stdc++.h>

using namespace std;

class student{
  
  int age;
  public:
  string name;
  string id;

  protected:
  string passcode;
  public:

  student(){

  }

  // student(string name,string id,int age){
  //   this->name = name;
  //   this->id = id;
  //   this->age =age;
  // }

  student(string name= "M",string id = "1",int age = 0):
  name(name),
  id(id),
  age(age){

  }

  // void init(string n,string i ,int a){
  //   age = a;
  //   name = n;
  //   id = i;
  // }

  void intro(){
    cout<<"My name is" <<name<<",my age is"<<age<<" "<<"my id is "<<id<<endl;
  }

  ~student(){

  }

};



int main(){
  student s1("Mohit","1",10);
  student s2();

  // s2 = s1;
  s1.intro();
  // s1.intro();
  // s2.intro();

  int a = 10;
  int*ptri = &a;

  student*ptrs = &s1;

  // cout<<(*ptrs).name<<endl;
  // cout<<ptrs->name<<endl; // prefferd way.!
  // cout<<ptrs->id<<endl

  // if(ptri == ptrs){
  //   cout<<"True"<<endl;
  // }else{
  //   cout<<"False"<<endl;
  // }

  // s1.init("Mohit","1",10)
  // s1.intro();
  return 0;
}