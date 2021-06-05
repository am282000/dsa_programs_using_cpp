//ittrative solution


/*
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int n;
int fact(int x){
    int res=1;
    for(int i=2;i<=n;i++)
        res=res*i;
    cout<< res;
}

int main(){
    cout<<"Enter number ";
    cin>>n;
    int x=n;
    fact(x);
}

*/

//complexity Q(n)
//auxilary space Q(1)


//reccursive method



#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int n;
int fact(int n){
    if(n==0)
        return 1;
    else
        return n*fact(n-1);
}

int main(){
    cout<<"Enter number ";
    cin>>n;
    cout<<fact(n);
    return  0;
}

//assumptions is n>=0 always
//complexity Q(n)
//auxilary space Q(n)




