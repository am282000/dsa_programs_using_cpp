// naive method
/*
#include<bits/stdc++.h>
using namespace std;

int prefixSum(int arr[], int n, int left ,int right){
    int sum=0;
    for(int i=left;i<=right;i++)
        sum=sum+arr[i];
    return sum;
}

int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
    int n=7;
    int arr[]={1,2,3,4,5,6,7};
    cout<<prefixSum(arr,n,2,3)<<endl;
    cout<<prefixSum(arr,n,1,3)<<endl;
    return 0;
}

//time complexity = O(n)
*/


//prefix sum araay - jiska sum phle hi pta ho !!

#include<bits/stdc++.h>
using namespace std;
int prefixSum[10000];

int prefixSumOfArray(int arr[], int n){

    prefixSum[0]=arr[0];    // index 0 of new array = old array
    for(int i=1;i<n;i++)
        prefixSum[i]=prefixSum[i-1]+arr[i];           // i index p vha tk ki values ka sum stored h ab
}

int getSum(int prefixSum[],int l,int r){
    if(l!=0)
        return (prefixSum[r]-prefixSum[l-1]);     // let 2 to 5 nikaalna h so prefixSum of 5 - prefix sum of 1
    else
        return prefixSum[r];
}

int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
    int n=7;
    int arr[]={1,2,3,4,5,6,7};
    prefixSumOfArray(arr,n);     // time taken O(n)
    cout<<getSum(prefixSum,1,3)<<endl;
    return 0;
}


//time complexity =O(1)
