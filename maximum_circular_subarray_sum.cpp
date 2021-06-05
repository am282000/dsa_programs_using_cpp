
#include<bits/stdc++.h>
using namespace std;

int maxCircularSum(int arr[],int n){
    int res=arr[0];
    for(int i=0;i<n;i++){
        int curr_sum=arr[i];
        int curr_max=arr[i];
        for(int j=1;j<n;j++){
        int index=(i+j)%n;
        curr_sum=curr_sum+arr[index];
        curr_max=max(curr_sum,curr_max);
        }
    res=max(res,curr_max);
    }
    return res;
}

int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
    int n=7;
    int arr[]={10,20,-30,40,-50,-60,70};
    cout<<maxCircularSum(arr,n);
    return 0;
}
