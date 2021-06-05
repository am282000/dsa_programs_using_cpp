#include<bits/stdc++.h>
using namespace std;

void printNto1(int n){
    if(n==0)
        return ;
    cout<<n<<" ";
    printNto1(n-1);
}

int main(){
    int n=4;
    printNto1(n);
    return 0;
}
//time complexity = Q(n+1) => Q(n)
//auxilary space = Q(n)
