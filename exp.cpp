#include<bits/stdc++.h>
using namespace std;


int fact(int n){
    int res=1;
    for(int i=2;i<=n;++i)
        res=res*i;
    int cnt=0;
    while(res%10==0){
            ++cnt;
            res=res/10;
    }
    cout<<cnt;
}

int main(){
    int n;
    cin>>n;
    fact(n);
}
