//naive method => max difference b/w arr[of right vali values]-arr[of left vali values]

/*
#include<bits/stdc++.h>
using namespace std;

int maxDiff(int arr[],int n){
   int res=arr[1]-arr[0];
   for(int i =0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            res=max(res,arr[j]-arr[i]);
        }
   }
   return res;
}

int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
    int n=7;
    int arr[]={2,3,10,6,4,8,1};
    //int arr[]={30,10,8,2},n=4;
    cout<<maxDiff(arr,n);
    return 0;
}
//compleexity Q(n^2)
*/

// optimised solution
#include<bits/stdc++.h>
using namespace std;

int maxDiff(int arr[],int n){
   int res=arr[1]-arr[0];
   int minVal=arr[0];
   for(int i=1;i<n;i++){
        res= max(res,arr[i]-minVal);
        minVal= min(minVal,arr[i]);
   }
   return res;
}

int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
    int n=7;
    int arr[]={2,3,10,6,4,8,1};
    //int arr[]={30,10,8,2},n=4;
    cout<<maxDiff(arr,n);
    return 0;
}
