//Naive Solution

/*

#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n==1)
        return false;

    for(int i=2;i<n;++i)
        if(n%i==0)
            return false;
    else
        return true;
}

void primeFactors(int n){
    for(int i=2;i<n;++i){
        if(isPrime(i)){
            int x=i;
            while(n%x==0){          //this while loop keep running till the n is divived by new x; e.g. in 12 = 2* 2*3
                cout<<i<<" ";
                x=x*i;
            }
        }
    }
}

int main(){
    int n;
    cin>>n;
    primeFactors(n);
}

//complexity O(n^2logn)

*/


//2nd method
/*
#include<bits/stdc++.h>
using namespace std;
void printPrimeFactors(int n){
    if(n<=1) return;             //return nothing
    for(int i=2;i*i<=n;i++){    //loop m only vo vale likhega jo multiple times aayeinge ...
        while(n%i==0){
            cout<<i<<" ";
            n=n/i;
        }
    }
    if(n>1)  //for 450 .. n=1 ... so didn't enter this loop ..  other e.g. in 84 n=7 so print it
        cout<<n;  // prime no who remain at last - must have single thats why don't go in the loop
}


int main(){
    int n;
    cin>>n;
    printPrimeFactors(n);
}
*/


#include<bits/stdc++.h>
using namespace std;
void printPrimeFactors{
    if(n<=1) return
    while(n%2==0){
        cout<<"2 ";
        n=n/2;
    }
    while(n%3==0){
        cout<<"3 ";
        n=n/3;
    }
    for(int i=5;i*i<=n;i=i+6){
        while(n%i==0){
            cout<<i<<" ";
            n=n/i;
        }
        while(n%(i+2)){
            cout<<(i+2)<<" ";
            n=n/(i+2);
        }
    }
    if(n>3)          // becoz for 2 and 3 it is already handled by while loop.
        cout<<n; //will happen only when the last prime factor have only one power.
}


//complexity .in worst case if the no is prime ... for loop runs... so Q(sqrt n/6) but take it as Q(sqrt n).
