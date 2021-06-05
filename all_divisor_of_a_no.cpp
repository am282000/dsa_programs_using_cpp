//Naive Solution

/*
#include<bits/stdc++.h>
using namespace std;

void printDivisors(int n){
    for(int i=1;i<=n;i++){
        if(n%i==0)
            cout<<i<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    printDivisors(n);
}

//complexity Q(n)
//Auxilary Space Q(1)
*/


//2nd method - complexity root n ....but ans in  unsorted way
/*
#include<bits/stdc++.h>
using namespace std;

void printDivisors(int n){
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        if(i!=n/i)             //so that it can help to get all the divisors.. and for some values it won't repeat.
            cout<<n/i<<" ";     // 1st print 1 than 25 than 5
        }
    }
}
int main(){
    int n;
    cin>>n;
    printDivisors(n);
}

//complexity Q(sqrt n)
//Auxilary Space Q(1)
*/

//3rd method- complexity (sqrt n ) ...in sorted order

#include<bits/stdc++.h>
using namespace std;

void printDivisors(int n){
    int i;
    for(i=1;i*i<n;i++)             //note i*i<n
        if(n%i==0)
            cout<<i<<" ";       //print all divisors from 1(inclusive) to root n (exclusive)
    for( ;i>=1;i--)                 // empty means whatever the current value of i
        if(n%i==0)
            cout<<n/i<<" ";     //print all divisors from root n(inclusive) to root n (inclusive)
}

int main(){
    int n;
    cin>>n;
    printDivisors(n);
    return 0;
}
//complexity   Q(root n)
//auxilary space  Q(1)
