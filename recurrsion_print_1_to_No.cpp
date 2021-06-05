//first print no 1 to n-1 ...then print n


#include<bits/stdc++.h>
using namespace std;

void print1toN(int n){
    if(n==0)
      return ;   //return 0/1/false/true
    print1toN(n-1);
    cout<<n<<" ";
}

int main(){
    int n=4;
    print1toN(n);
    return 0;
}

//time complexity=Q(n+1)=>Q(n)
//auxilary space=Q(n+1)=>Q(n)
