// #include<iostream>
#include<bits/stdc++.h>

using namespace std;

class Metric{
    public:
    int kms;
    int mts;

    void display(){
        cout<<kms<<" kms ans "<<mts <<" mts"<<endl;
    }

};

class imperial{
    public:
    int miles;
    int feet;

    imperial(int m,int f){
        miles = m;
        feet - f;
    }

    // M 2
    imperial(Metric m){
        miles = m.kms/1.6;
        feet = m.mts/0.3;
    }

    void display(){
        cout<<miles<<" miles and "<<feet << " feet"<<endl;
    }

    // M 1
    operator Metric(){
        Metric m;
        m.kms = miles*1.6;
        m.mts = feet*0.3;
        return m;
    }

};

int main(){
    imperial i(5,10);

    Metric m;
    m = (Metric)i;

    imperial j = m;
    imperial j2(m);
    
    m.display();
  return 0;
}