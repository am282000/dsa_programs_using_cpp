//1st method
/*
#include<bits/stdc++.h>
using namespace std;
int n;
int countZeros(int n){
    int fact=1;
    for(int i=2;i<=n;++i)
        fact=fact*i;
    int res=0;
        while(fact%10==0){
            ++res;
            fact=fact/10;
        }
    return res;
}
int main(){
    cin>>n;
    cout<<"Factorial of "<<n<<" contains "<<countZeros(n)<<" zeroes";
}

//complexity Q(n)
//overflow for large values

*/

//2nd method
#include<bits/stdc++.h>
using namespace std;
 int res =0,n;
int countZero(int n){
    for(int i=5;i<=n;i=i*5)
        res =res+(n/i);
    return res;
}
int main(){
    cin>>n;
    cout<<countZero(n);
}

//input 5^k<=n
//complexity Q(log n)
//applicable for large values

