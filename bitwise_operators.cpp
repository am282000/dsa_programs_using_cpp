#include<bits/stdc++.h>
using namespace std;
int main(){
    bool x,y;
    cin>>x>>y;
    //there are total 6 operators other 3 will be discussed in bitwise_operators_2.cpp  ..........
    cout<<"And operator "<<(x&y)<<endl;  //return true when both true . e.g x=y=1 than only output =1
    cout<<"Or operator "<<(x|y)<<endl;  //return true when any/both true . e.g x=0 y=0 than only output =0
    cout<<"Xor operator "<<(x^y)<<endl;  //return true when both input different . e.g x=y=0 or 1 than only output =1
}
