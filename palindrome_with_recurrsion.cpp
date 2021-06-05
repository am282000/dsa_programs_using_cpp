
//approach - check for first and last string character is same
//than check for inner s0 s1 s2 s3 .....sn-3 sn-2 sn-1  ....2nd case from start=2nd from last and so on
//base case either n=0 or n=1

#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string str, int start, int end)
{
	if(start >= end)    //means they are crossing each other
		return true;

	return ((str[start]==str[end]) &&
		     isPalindrome(str, start + 1, end - 1));
}

int main() {

	string s ;
	cin>>s;
		//printf("%s", isPalindrome(s, 0, s.length() -1) ? "palindrome" : "not palindrome");
        //isPalindrome(s,0,s.length()-1)? cout<<"Palindrome" : cout<<"Not Palindrome";   //- this is also correct
        cout<<(isPalindrome(s,0,s.length()-1)? "true" :"false");
	return 0;
}

//time complexity = O(n)
//auxilary space = O(n/2 around)=>O(n)

