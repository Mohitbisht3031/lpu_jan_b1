// #include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    list<int>l;
    l.push_back(10);

    l.push_back(20);
    
    l.push_front(30);

    for(list<int>::iterator i = l.begin();i!= l.end();i++){
        cout<<*i<<" ";
    }
    cout<<endl;
    l.push_front(120);

    l.pop_back();
    l.pop_front();
    // l.clear();
    // reverse(v.begin(),v.end());
    // sort(v.begin(),v.end());
    l.reverse();
    l.sort();
    for(list<int>::iterator i = l.begin();i!= l.end();i++){
        cout<<*i<<" ";
    }


  return 0;
}