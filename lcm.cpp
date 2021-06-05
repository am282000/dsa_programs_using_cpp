//Naive Solution

/*
#include<bits/stdc++.h>
using namespace std;

int lcm(int a,int b){
    int res=max(a,b);
    while(true){
        if(res%a==0 && res%b==0)
            return res;
        res++;
    }
    return res;
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<lcm(a,b);
}


//time complexity = O(a*b -max(a,b))

*/


//2nd method -optimised method

#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    if(b==0)
        return a;
    else
        return(b,a%b);                   //till now it is euclid theorem
}

int lcm(int a,int b){
    return (a*b)/gcd(a,b);              // a*b=lcm(a,b) * gcd(a,b)
 }

int main(){
    int a,b;
    cin>>a>>b;
    cout<<lcm(a,b);
}

// complexity is O(log(min(a,b)))
