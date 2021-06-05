//naive solution -poor fuddu solution

/*
#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    int res = min(a,b);
    while(res>0){
        if(a%res==0 && b%res==0){
            break;
        }
        res--;
    }
    return res;
}

int main(){
    int a,b;
    cout<<"Enter value of a and b ";
    cin>>a>>b;
    cout<<gcd(a,b);
    return 0;
}

//time complexity = O(min(a,b))

*/



//2nd method  -- By euclidean algorithm

/*

#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
    while(a!=b){
        if(a>b)
            a=a-b;
        else
            b=b-a;
    }
    return a;   // or we can also write return b
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b);
    return 0;
}


*/
// 3rd method -easy way to do this in c++14 - # optimised solution



#include<bits/stdc++.h>
using namespace std;

int greatest(int a,int b){
    if(b==0)          // kyuki isme reminder se divide kr krke at last 0 hi banana hai .....bhi leinge kyuki at last b hi 0 bnega
        return a;     //gcd(12,15) become gcd(15,12) become gcd(12,3) become (3,0)
                    // by keeping the second term as first in next step .. and finding b%a and write just remainder
    return greatest(b, a%b);     //phle to yeah swap krlega b=bada no, a=chota no
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<greatest(a,b);
    return 0;
}


