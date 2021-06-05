
#include<bits/stdc++.h>
using namespace std;

int linearSearch(int arr[],int n,int key){
    for(int i=0;i<n;i++)
        if(key==arr[i])
        return i;
    return -1;
}

int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
    int arr[]={10,20,30,40,50,60,70,80,90,100};
    int n=10,k;
    cin>>k;
    cout<<linearSearch(arr,n,k);
    return 0;
}

//time complexity = O(n)
//used for unsorted array
