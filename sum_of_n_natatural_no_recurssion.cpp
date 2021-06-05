#include<bits/stdc++.h>
using namespace std;

int getSum(int n){
    if(n==0)
        return 0;
    return n+getSum(n-1);
}

int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
    int n=4;
    cout<<getSum(n);
    return 0;
}

//time complexity = Q(n+1)=>Q(n)
//auxilary space =Q(n+1)=>Q(n)
