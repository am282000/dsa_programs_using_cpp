
 // in recurssion we always solve the problem in parts
 //246= 12  to do parts remove any one digit and call the func for others
 //but removing first and middle digitd is really complex ..so we remove last one.
 // n/10 - to remove last digit
 // n%10 - to get the last digit


 //recurssive method
  /*
 #include<iostream>
 using namespace std;

 int getSum(int n){
    if(n==0)             //if(n<=9)    //this will make time comp=Q(digits)
        return 0;        // return n   //but inc the scace complexity
    return getSum(n/10)+n%10;
 }

 int main(){
    int n;
    cin>>n;
    getSum(n);
 }

 //time complexity = Q(digit+1)=Q(digits)

 //auxilary space = Q(digits+1)=Q(digits)
*/


//iterative solution

#include<bits/stdc++.h>
using namespace std;

int getSum(int n){
    int res=0;
    while(n!=0)   //also write it as n>0
    {
        res=res+n%10;
        n=n/10;
    }
    return res;
}
 int main(){
    int n=2351;
    cout<<getSum(n);
    return 0;
 }

 //time=Q(digits)
 //auxilary space=Q(1)
