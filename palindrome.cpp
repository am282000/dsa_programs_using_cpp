#include<bits/stdc++.h>
using namespace std;
int n,rev=0;
int checkPalindrome(int x){
    while(x!=0){
        rev=rev*10+x%10;
        x=x/10;
    }
    if(rev==n)
        cout<<"Yes "<<n<<" is a palindrome";
    else
        cout<<"No "<<n<<" is not a palindrome";
}
int main(){
    cout<<"Enter number ";
    cin>>n;
    int x=n;
    checkPalindrome(x);
}

//complexity Q(n)
