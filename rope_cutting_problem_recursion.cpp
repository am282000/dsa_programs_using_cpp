//ensure it may pass this case specially n=9 a=2 b=2 c=2

#include<bits/stdc++.h>
using namespace std;

int maxPiece(int n, int a ,int b ,int c){
    if(n==0) return 0;
    if(n<0) return -1;
    int res= max(maxPiece(n-a,a,b,c),
             max(maxPiece(n-b,a,b,c),           //phle b and c ka max nikalo than inke result ka a vale k sath max nikaalo
                maxPiece(n-c,a,b,c)
                 ));

    if(res== -1)
return -1;
    return res+1;  // coz 1 piece of rope is already cut ..usko add b to krna h ... than we check for other
}

int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
    int n,a,b,c;
    //n=23;a=11,b=9;c=12;
    n=9;a=2,b=2;c=2;
    cout<<maxPiece(n,a,b,c);
    return 0;
}

//time complexity = O(3^n)
