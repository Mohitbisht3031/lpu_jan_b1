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

  void init(string n,string i ,int a){
    age = a;
    name = n;
    id = i;
  }

  void intro(){
    cout<<"My name is" <<name<<",my age is"<<age<<" "<<"my id is "<<id<<endl;
  }

  friend class bestfriend; //how to declase a class as friend ..!
  friend void hacker(student s); // how to declare a function as a friend.!
};

class bestfriend{
  public:
  void privateInfo(student s){
    cout<<"Age of my best friend is "<<s.age<<endl;
    cout<<"His passCode is "<<s.passcode<<endl;
  }

};

void hacker(student s){
  cout<<"Pass cord of student name "<<s.name<<" is "<<s.passcode<<endl;
}

int main(){
  student s1;
  s1.init("Mohit","1",10);

  bestfriend bff;

  bff.privateInfo(s1);

  return 0;
}