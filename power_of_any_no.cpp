//Naive solution
/*
#include<bits/stdc++.h>
using namespace std;

int power(int x, int n){
    int res=1;
    for(int i=1;i<=n;i++)
        res=res*x;
    return res;
}

int main(){
    int x,n;
    cout<<"enter no ";
    cin>>x;
    cout<<"raise to power ";
    cin>>n;
    cout<<power(x,n);
}

//complexity = Q(n)

*/

//2nd method - Optimised solution

/*
#include<bits/stdc++.h>
using namespace std;

int power(int x,int n){
    if(n==0)
        return 1;
    int temp=power(x,n/2);   //this will call itself again and again till n=0
    temp=temp*temp;
    if(temp%2==0)
        return temp;
    else
        return temp*x;
}

int main(){
    int x,n;
    cout<<"Enter x raise to power n ";
    cin>>x>>n;
    cout<<power(x,n);
}

//complexity Q(log n)
//auxilary space Q(log n)


*/

//method 3 -iterative power = binary exponential
//e.g  2^10 ...n=10 ...10= 1010 in binary

#include<bits/stdc++.h>
using namespace std;

int power(int x,int n){
    int res=1;
    while(n>0){
        if(n%2!=0)    //when n is odd only   //or we cn write it as  (n & 1)- bitwise and
          res=res*x;
        else
            return 0;
        x=x*x;         //for even directly run this line
        n=n/2;        //or we cn write it as (n>>1) -swift operator
    }
   return res;
}

int main(){
    int x,n;
    cout<<"Enter x and n : ";
    cin>>x>>n;
    cout<<power(x,n);
}
//complexity O(log n)
//auxilary space O(1)
