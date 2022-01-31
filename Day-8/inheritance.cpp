// #include<iostream>
#include<bits/stdc++.h>

using namespace std;

// Single
class a{};
class b : public a{};

//multiple
class a{};
class b{};
class c : public a,public b{};

//multilevel
class a{};
class b:public a{};
class c:public b{};

//heri.
class a{};
class b:public a{};
class c:public a{};

//hybrid
class a{};
class b:public a{};
class c: public a{};
class d : public b,public c{};
// class e{};

int main(){
  return 0;
}