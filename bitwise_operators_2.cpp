//Note dont use negaive no for left and right shift operators becox the behavior is undefined.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y=4;  // enter no is in int value ..it will automatically convert it into binary value.
    cin>>x;
    cout<<"Left shift operator "<<(x<<1)<<endl;  // here we pass x =on which we have to apply all the operations ... than pass
    //the no by how many shifts we want to change it.. e.g consider a 32 bit no. 000....011 by x<<2 ..starting 2 value will be
    // removed and 2 zeroes will be added at last.
    cout<<"Left shift operator "<<(x<<2)<<endl;
    cout<<"Left shift operator "<<(x<<y)<<endl;

    //we can say that left shift of x<<y is equal to x*2^y ..for all y=0 (Note - here y is the starting bits of a 32 bit no)



    cout<<"Right shift operator "<<(x>>1)<<endl;  // here we pass x =on which we have to apply all the operations ... than pass
    //the no by how many shifts we want to change it.. e.g consider a 32 bit no. 000....011 by x<<1 ..last 1 value will be
    // removed and 1 zero will be added at start.
    cout<<"Right shift operator "<<(x>>2)<<endl;
    cout<<"Right shift operator "<<(x>>y)<<endl;

    //we can say that right shift of x>>y is equal to floor of x/2^y .. for all y (Note - here y is the last bits of a 32 bit no)



    //for signed bit it will simply take 1st bit for dign .. 0=+ /// 1=-ve ...
    //e.g  000....01 not of this 1111.....10 ... and for signed bit it will return 2's complement of x in n bit ... (2^32-1 -1)
    //becoz 2^32-1 is the total no whn all 11....11 so for find for 1 we have to -1.for ans just remove 2^32.term left -2 is ans
    cout<<"Bitwise not operator "<<(~x)<<endl; // negation of x .. all the 0's becomes 1 and all th e 1's become 0.
    cout<<"Bitwise not operator "<<(~5)<<endl; // negation of x .. all the 0's becomes 1 and all th e 1's become 0.
    /*
    unsigned int x=1;
    cout<<"Bitwise not operator "<<(~x)<<endl; // negation of x .. all the 0's becomes 1 and all th e 1's become 0.
    unsigned int x=5;
    cout<<"Bitwise not operator "<<(~x)<<endl;  // 111 = 2^n-1 where n=3.

    */
}

