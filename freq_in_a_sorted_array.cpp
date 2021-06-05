//worked for only sorted array
#include<bits/stdc++.h>
using namespace std;

int printFreq(int arr[],int n){
  int freq=1,i=1;
  while(i<n){
    while(i<n && arr[i]==arr[i-1]){  // pichle vala element aage vale k equal h ya nhi
        freq++;
        i++;
    }
    cout<<arr[i-1]<<" comes "<<freq<< " times."<<endl;
    i++;
    freq=1;
  }
  if(n==1 || arr[n-1]!=arr[n-2])    // for the cases where we enter either only one array or for the last element of the array
    cout<<arr[n-1]<<" comes "<<freq<< " times."<<endl;    // who have no i+1 to check himself.
}

int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
    int n=10;
    int arr[]={3,3,3,5,6,7,7,7,8,8};
    printFreq(arr,n);
    return 0;
}
//time complexity = Q(n)
