// #include<iostream>
#include<bits/stdc++.h>

using namespace std;

class Animal{
    public:
    void speak(){
        cout<<"Made a sound.!!"<<endl;
    }
};

class dog : public Animal{
    public:

    void speak(){
        cout<<"woof woof"<<endl;
    }

};

class cat : public Animal{
    public:

    void speak(){
        cout<<"meaowwww"<<endl;
    }

};


int main(){
    dog d;
    cat c;
    Animal a;
    a.speak();
    d.speak();
    c.Animal::speak();

  return 0;
}