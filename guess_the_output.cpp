
//Guess the output - 1st problem
/*
#include<bits/stdc++.h>
using namespace std;

void fun(int n){
    if(n==0)
        return;
    cout<<n<<endl;
    fun(n-1);
    cout<<n<<endl;
}

int main(){
    fun(3);
    return 0;
}
*/

// 2nd problem

/*
#include<bits/stdc++.h>
using namespace std;

void fun(int n){
    if(n==0)
        return;
    fun(n-1);
    cout<<n<<endl;
    fun(n-1);
}

int main(){
    fun(3);
    return 0;
}
*/

//3rd problem
/*
#include<bits/stdc++.h>
using namespace std;
int fun(int n){
    if(n==1)
        return 0;
    else
        return 1+fun(n/2);
}
int main(){
    cout<<fun(2);
    return 0;
}
//It is going to return floor of logn base 2 = inshort upto 31 it is goiing to give value 4.

*/

//4th problem

#include<bits/stdc++.h>
using namespace std;
void fun(int n){
    if(n==0)
        return ;
    fun(n/2);
    cout<<n%2;
}
int main(){
    fun(7);
    return 0;
}

//this is going to give decimal to binary if n>0.
