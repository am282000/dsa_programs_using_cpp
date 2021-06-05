//By left shift operator

/*
#include<bits/stdc++.h>
using namespace std;

void kthBit(int n, int k){
    if(n & (1 << (k - 1)))      // 1 in binary = 000...01 and we are left shifting it by k-1 . let k=3 .. than left shift by 2 is
                            // 000....0100 ... yes coz last 3rd bit of both is not equal to 0.
        cout<<"Yes ! All set.";
    else
        cout<<"No";
}

int main(){
    int n ,k;
    cout<<"Enter n and k ";
    cin>>n>>k;
    kthBit(n,k);
    return 0;
}

*/


//By right shift operator


#include<bits/stdc++.h>
using namespace std;

void kthBit(int n,int k){
    if((n>>(k-1))& 1)   //simple idea make the last bit 1 and check it by binary 1 if AND of these are 1 than YES.
        cout<<"Yes !";
    else
        cout<<"No";
}

int main(){
    int n,k;
    cout<<"Enter n and k ";
    cin>>n>>k;
    kthBit(n,k);
}
