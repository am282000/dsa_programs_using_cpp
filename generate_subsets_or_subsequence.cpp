//Consedering all char in string are different from each other .. in real in sets also this happens

//subset = means creating all the posiible sets including fi.
//subsequencing = removing 0 or more char from the string . and keeping the order of remaining char same
//for a string of length n ..possible subsets/subsequences are 2^n



#include<bits/stdc++.h>
using namespace std;

void subString(string str,string curr,int index){
    if(index==str.length()){    // is index value = length of string than print output.
        cout<<curr<<" ";
        return ;
    }
    subString(str,curr,index+1);
    subString(str,curr+str[index],index+1);      // why curr +str[index] ? ... to print - " ","A","AB" ...to simply append
}

int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
   string str="ASHISH";
   subString(str," ",0);       // curr is always null becoz we need to print fi. ... starting index is always 0.
    return 0;
}
