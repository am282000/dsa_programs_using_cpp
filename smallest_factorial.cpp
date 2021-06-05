
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int tc;
	cin>>tc;
	for(int i=0;i<tc;i++){

    int num,fact[200],rem=0,digits=1;
	    cin>>num;
	    fact[0]=1;
	    for(num;num>=1;num--){
	        for(int j=0;j<digits;j++){
	            fact[j]=fact[j]*num+rem;
	            rem=fact[j]/10;
	            fact[j]%=10;
	        }
	        while(rem){
	            fact[digits++]=rem%10;
	            rem=rem/10;
	        }
	    }
	    for(digits--;digits>=0;digits--)
	    cout<<fact[digits];
	 cout<<endl;
	}
	return 0;
}
