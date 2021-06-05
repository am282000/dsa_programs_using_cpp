/*
#include<bits/stdc++.h>
using namespace std;

bool Prime(int i){
    for(int k=2;k<i;k++)
        if(i%k==0)
            return false;
    return true;
}

int printPrime(int n){
    if(n<2) cout<<"No prime no available.";

    for(int i=2;i<n;i){
        if(Prime(i))
            cout<<i<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    cout<<printPrime(n);
}

//complexity = O(n*sqrt n)

*/

//@nd method - Sieve of Erathoshesness

/*
#include<bits/stdc++.h>
using namespace std;

void seive(int n){
    vector <bool> isPrime(n+1,true);   // we check for n+1 values ... also assign all the values as true in starting
    for(int i=2;i*i<=n;i++){
        if (isPrime[i]){
            for(int j=2*i;j<=n;j=j+i)             // put j=i*i - for  more optiised result
                isPrime[j]=false;
        }
    }
    for(int i=2;i<=n;i++){
        if(isPrime[i])
            cout<<i<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    seive(n);
}

//complexity = O(nloglogn)

*/
//3rd best optimised code


#include<bits/stdc++.h>
using namespace std;
void seive(int n){
    vector<bool> isPrime(n+1,true);
    for(int i=2;i<=n;i++){
        if(isPrime[i]){    // as an array use kreinge is function ko
            cout<<i<<" ";
        for(int j=i*i;j<=n;j=j+i)
            isPrime[j]=false;  //as an array leinge yha b
        }
    }
}

int main(){
    int n;
    cin>>n;
    seive(n);
}

//complexity=O(nloglogn)

