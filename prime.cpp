//Naive Method

// 1 is neither prime nor composite

/*
#include<bits/stdc++.h>
using namespace std;

bool prime(int n){
    if(n==1)
        return false;

    for(int i=2;i<n;++i)
        if(n%i==0)
            return false;
    else
        return true;
}

int main(){
    int n;
    cin>>n;
    cout<<prime(n);
}

//time complexity=O(n)
//worst case when no is prime ... loop can run (n-2) times.

*/


//2nd method


/*
// every dividend has some divisor pairs like 30=(1,30),(3,10),(5,6)
//2 ke underroot n tk check kro if there is a divisor(pair) we will get it. beyond this there is no divisor(pair) that can divide


//#include<bits/stdc++.h>     //or simply use bits/stdc+++ it contains all libraries no extra library is needed.
#include<iostream>
#include <cmath>             //to access the sqrt func
using namespace std;

bool prime(int n){
    if(n==1)
        return false;    // return 0= not prime
                                            //in this we have running iteration i*i till it is lesser than n only
    for(int i=2;i<=sqrt(n);++i)                //also for(int i=2;i*i<=n;++i)   note here we used <=
        if(n%i==0)
            return false;
    else
        return true;      // return 0 = prime
}

int main(){
    int n;
    cin>>n;
    cout<<prime(n)<<endl;
    cout<<sqrt(n);    //to check is sqrt is working or not
}

//complexity O(sqrt(n))

*/


//3rd method - more optimised

// 2,3 are prime leave it for a sec... if we put more condition like n%(2 or 3)==0 return false ... we save a lot of time


#include<bits/stdc++.h>     //or simply use bits/stdc+++ it contains all libraries no extra library is needed.
using namespace std;

bool prime(int n){
    if(n==1)
        return false;    // return 0= not prime
    if(n==2 || n==3)
        return true;    // return 1= prime
    if(n%2==0 || n%3==0)
        return false;          // if a no is getting divide by 2 or 3 it is not a prime no.


    for(int i=5;i<=sqrt(n);i=i+6)           // i is started from 5 ... than inc i=i+6
        if(n%i==0 || n%(i+2)==0)           // e.g 5,7 ....than 5+6 = 11,13
            return false;
    else
        return true;      // return 0 = prime
}

int main(){
    int n;
    cin>>n;
    cout<<prime(n)<<endl;
    //cout<<sqrt(n);    //to check is sqrt is working or not
}


//incrementing i by 6 ... performing 2 operations .....6/2 ==3 .. so this is 3 times faster than 2nd method
