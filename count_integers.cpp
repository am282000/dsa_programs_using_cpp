#include<bits/stdc++.h>
using namespace std;

int result=0,n;
int main(){
    cout<<"Enter number ";
    cin>>n;
    while(n>0){
        n=n/10;
        ++result;
    }
    return result;
}

//count is a in build literal.
//complexity = Q(n)
