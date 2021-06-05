//Naive method
/*
#include<bits/stdc++.h>
using namespace std;

int maxSum(int arr[],int n){
    int res=arr[0];
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum=sum+arr[j];
            res=max(sum,res);
        }
    }
    return res;
}

int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
    int n=5;
    int arr[]={1,-2,3,-1,2};
    cout<<maxSum(arr,n);
    return 0;
}

// time complexity O(n^2)

*/


//Method 2
// first takr array index 0 ,,then for index 1 choose the max value of sum from either a[1] or a[0]+a[1].....and so on !!

#include<bits/stdc++.h>
using namespace std;

int maxSum(int arr[],int n){
    int res=arr[0];
    int maxEnding=arr[0];  // in starting max Ending =0 then it goes on updating..
    for(int i=0;i<n;i++){
        maxEnding=max(maxEnding+arr[i],arr[i]);  // maxEnding+arr[i] becoz maxending is already max sum for all terms before this.
        res=max(res,maxEnding);
    }
    return res;
}

int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
    int n=5;
    int arr[]={1,-2,3,-1,2};
    cout<<maxSum(arr,n);
    return 0;
}

// time complexity = O(n)

