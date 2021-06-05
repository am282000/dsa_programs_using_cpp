// There is always n! permutation available for a no n.

// more clear with pic named permutations
// in this we are going to fix first char than second than third than the last one who is left take the last position automatically
// thats why we used or loop upto string length - 1

#include<bits/stdc++.h>
using namespace std;

void permute(string s, int i){
    if(i==s.length()-1){
        cout<<s<<" ";
        return ;
        }
    for(int j=i;j<s.length();j++){
        swap(s[i],s[j]);   // we already have a fixed A now we make recursive calls for others.
        permute(s,i+1);   // increasing the index value
        swap(s[i],s[j]);  // to get the original string back ... ABCD so that this tym we can fix B___ as index 0
    }
}

int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
     string s;
    int i=0; //by default in c also it is zero - here i is the index of the first char
    cin>>s;
    permute(s,i);
    return 0;
}
