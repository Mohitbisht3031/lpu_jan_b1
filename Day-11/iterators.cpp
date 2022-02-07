// #include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<string> solar_sys= {"mercury","venus","earth","mars","Jupitor","saturan","uranus","naptune"};

    vector<string>::iterator sachin_musk = solar_sys.begin();
    vector<string>::iterator champa_musk = solar_sys.begin();
    advance(sachin_musk,2);
    cout<<"distance from sachin is "<<distance(sachin_musk,champa_musk)<<endl;


    // cout<<*sachin<<endl;

    // cout<<"Now i'm at "<<*(sachin+2)<<endl;
    // advance(sachin,2);

    // // cout<<"oh god i reached "<<*sachin<<endl;

    // // next(sachin,2);
    // cout<<"now i'm at "<<*next(sachin,2)<<"----"<<*next(sachin,2) <<endl;

  return 0;
}