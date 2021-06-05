// When caller has to do nothing after the child call ... tail recursive
//Doesn't have to save the state for further tasks ...e.g print n to 1
//compiler take less time in this.


// When caller has to do something after the child call ... Not tail recursive
//Need to save the state for future use.
//compiter take more time


//.............1st program ..............
// for such programs what modern compilers do to make it fast ...they internally add

/*
#include<bits/stdc++.h>
using namespace std;

void printNto1(int n){
    start:
    if(n==0)
      return;
    cout<<n<<" ";
    n=n-1;            //printNto1(n-1);  - old one
    goto start;
}

int main(){
    int n=4;
    printNto1(n);
    return 0;
}
// this process is called as tail call elemination

*/


//............2nd program................
//some of the non tail recurssive functions are converted into tail recursive functions ....by adding extra parameters

/*
#include<bits/stdc++.h>
using namespace std;

void print1toN(int n,int k){          //void print1toN(int n)
    if(n==0)
      return ;
    cout<<k<<" ";                    //print1toN(n-1);    - old values
    print1toN(n-1,k+1);              //cout<<n<<" ";
    //it is LAST RECCURSIVE CALL
}

int main(){
    int n=4;
    int k=1;
    print1toN(n,k);
    return 0;
}
*/

//this is the equivalent tail recursive relation . It runs faster


//Note Every non reccursive function is not converted imto tail recursive func.

//merge sort - Non tail recursive
//quick sort - tail recursive - thats why it is fast

// Inorder and preorder traversal is tail reccursive
//post order is not  tail recursive


//...............3rd program................

//not tail recursive
/*
#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n==0||n==1)
        return 1;
    return n*fact(n-1);
}
int main(){
    cout<<fact(5);
    return 0;
}
*/

//tail recursive
#include<bits/stdc++.h>
using namespace std;

int fact(int n,int k){
    if(n==0||n==1)
        return k;
    fact(n-1,k*n);
}
int main(){
    int n=5,k=1;
    cout<<fact(n,k);
    return 0;
}
