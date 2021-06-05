// Naive solution

/*
#include<bits/stdc++.h>
using namespace std;

int findMajority(int arr[],int n){
    for(int i=0;i<n;i++){
        int cnt=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j])
                cnt++;
        }
            if(cnt>n/2)       // n/2 se greater hoga only than print index of first occurance.
                return i;
    }
    return -1;
}

int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
    int n=12;
    int arr[]={1,2,6,7,7,4,7,7,6,7,7,7};
    cout<<findMajority(arr,n);
    return 0;
}

// time complexity = O(n^2)
*/


// Method 2 - optimise - moore moting algo - this gona give any occuranace of majority element

#include<bits/stdc++.h>
using namespace std;

int findMajority(int arr[],int n){
    int res =0 ,cnt=1;
    for(int i=1;i<n;i++){    // spcl dhyan do => i=1 .. becoz we have to compare values thats why we given cnt=1
        if(arr[res]== arr[i])
            cnt++;
        else
            cnt--;
        if(cnt==0){
            res=i;
            cnt=1;
        }
    }


   cnt =0;
   for(int i=0;i<n;i++){                   // this loop is checking that the elemenet is really a majority or not.
        if(arr[res]==arr[i])
            cnt++;
   }
    if(cnt<=n/2)
        res = -1;
   return res;
}

int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
    int n=6;
    int arr[]={8,8,6,6,6,6};
    cout<<findMajority(arr,n);
    return 0;
}

//tine complexity O(n)
//space O(1)
