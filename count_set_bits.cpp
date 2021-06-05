//naive method - simply check is the last bit is 1 or not. by deleting the bit from last.
/*
#include<bits/stdc++.h>
using namespace std;

int countSet(int n){
    int res=0;
    while(n>0){                            //Also do with bitwise
        if(n%2!=0)                         //if((n&1)==1)
        res++;                             //res++;
        n=n/2;                             //n=n>>1;
    }
    return res;
}

int main(){
    int n;
    cin>>n;
    cout<<"Output is "<<countSet(n);
}

//complexity = Q(Total complexity of n)

*/

//2nd method = brian kerningam's algorithm
/*
#include<bits/stdc++.h>
using namespace std;

int countSet(int n){
   int res=0;
   while(n>0){
        n=(n&(n-1));   //lets take an e.g n=40 in decimal 101000 so n-1=39 in decimal 100111 taking and of this gives 32=100000.
        res++;         // in short last set bit(right side se 1st 1) is removed/or we can say converted into 0. run till all 0.
   }
   return res;
}

int main(){
    int n;
    cin>>n;
    cout<<"no of set bits is "<<countSet(n);
}

//complexity = Q(no of set bits)
*/



//3rd method - Lookup table method for 32  bits no.

#include<bits/stdc++.h>
using namespace std;

int table[256];    //work for value 0 to 255

//we divide the 32 bit no in 4 sets of 8 bit no
void initialize(){
    table[0]=0;
    for(int i=1;i<256;i++)
        table[i]=(i&1) + table[i/2];          //e.g 5 = 1+1=total 2 set bits
}
int countSet(int n){
    int res =table[n&0xff];   // this is the code of a 8 bit hexa decimal no i.e. 11111111 => And & of these no(8and 255) is 13
    n=n>>8;  // simply use right shift operator to ignor elast 8 bit no or 1 set onwards
    res =res+table[n&0xff];
    n=n>>8;
    res =res+table[n&0xff];
    n=n>>8;
    res =res+table[n&0xff];
    return res;

}

int main(){
    int n;
    initialize();
    countSet(n);
}

//complexity = Q(1)
