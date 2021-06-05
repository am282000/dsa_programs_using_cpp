#include<bits/stdc++.h>
using namespace std;

int findMinDiff(int arr[],int n,int m){
    if(n==0||m==0)
        return 0;
    sort(arr,arr+n);
    if(n<m)
        cout<<"No. of students cannot be more than no of chocolate"<<endl;
    int min_diff =INT_MAX;
    for(int i=0;i+m-1<n;i++){
        int diff=arr[i+m-1]-arr[i];
        if(diff<min_diff)
            min_diff=diff;
    }
    return min_diff;
}

int main(){
int tc;
cin>>tc;
int arr[tc]={};
for(int j=0;j<tc;j++)
    cin>>arr[j];
int m=3;
int n =sizeof(arr)/sizeof(arr[0]);
cout<<"Minimum difference b/w first and last is : "<<findMinDiff(arr,n,m);
return 0;
}

