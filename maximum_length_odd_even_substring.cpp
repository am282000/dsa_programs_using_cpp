//Naive method

/*
#include<bits/stdc++.h>
using namespace std;

int maxEvenOdd(int arr[],int n){
    int res=1;
    for(int i=0;i<n;i++){
        int cnt=1;
        for(int j=i+1;j<n;j++){
            if((arr[j]%2==0 && arr[j-1]%2!=0) || (arr[j]%2!=0 && arr[j-1]%2==0))
                cnt++;
            else break;
        }
        res=max(res,cnt);
    }
    return res;
}

int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
    int n=6;
    int arr[]={5,10,20,6,3,8};
    cout<<maxEvenOdd(arr,n);
    return 0;
}

// time complexity = O(n^2)
*/

//2nd method

#include<bits/stdc++.h>
using namespace std;

int maxEvenOdd(int arr[],int n){
    int res=1;
    int cnt=1;
    for(int i=0;i<n;i++){
            if((arr[i]%2==0 && arr[i-1]%2!=0) || (arr[i]%2!=0 && arr[i-1]%2==0)){
                cnt++;
                res=max(res,cnt);
            }
            else cnt=1;
    }
    return res;
}

int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
    int n=6;
    int arr[]={5,10,20,6,3,8};
    cout<<maxEvenOdd(arr,n);
    return 0;
}

//time complexity = O(n)
