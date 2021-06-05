#include<bits/stdc++.h>
using namespace std;

int leftRotate(int arr[],int n){
    int temp=arr[0];
    for(int i=1;i<n;i++)
        arr[i-1]=arr[i];   // array of i ko array of i-1 m store krdo
    arr[n-1]=temp;
}

int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
    int n=9;
    int arr[n]={3,6,5,8,4,9,2,5,9};
    cout<<"Old Array : ";
    for(int i=0;i<n;i++)
    cout<<arr[i];
    leftRotate(arr,n);
    cout<<"\nResulted array : ";
    for(int i=0;i<n;i++)
        cout<<arr[i];
    return 0;
}

//time complexity = O(n)
//auxilary space =O(1)
