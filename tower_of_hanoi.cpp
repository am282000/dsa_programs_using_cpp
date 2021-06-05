//We are given 3 towers A,B,C . we have to transfer discs from A to C using B as auxilary tower
//The order of discs in A and C are same .. smalles tdisc is always on the top
//Rules= Only one disc move at a time
        //No longer disc above smaller in any tower
        //Only the disc on top can be moved

//We need to find no to steps to do so.

#include<bits/stdc++.h>
using namespace std;

void TOH(int n,char A,char B,char C){
    if(n==1){  //if only 1 disc left simply move it from A to C
        cout<< "Move 1 from "<<A<<" to "<<C<<endl;
        return ;
    }
    TOH(n-1,A,C,B);   //initial =A Final=B using Auxilary =C
    cout<<"Move "<<n<<" from "<<A<<" to "<<C<<endl;  // Must step after step 1 move nth last disk from A to C.
    TOH(n-1,B,A,C);   //initial =B Final=C using Auxilary =A
}

int main(){
int n;
char A,B,C; //variables
n=3 ,A='A',B='B',C='C';    //input values
TOH(n,A,B,C);
}

//movements required = 2^n -1   for n=3 , 8-1 =7
