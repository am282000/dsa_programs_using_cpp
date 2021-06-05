//naive method
/*
=>traverse in right
=>search for zero ... run another loop from i+1 to seach a non zero element
=>swap 0 and non zero element
*/

/*
#include<bits/stdc++.h>
using namespace std;

int moveToEnd(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            for(int j=i+1;j<n;j++)
                if(arr[j]!=0)
                swap(arr[i],arr[j]);
        }
    }
}

int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
    int n=9;
    int arr[n]={3,6,0,8,0,9,0,5,9};
    cout<<"Old Array : ";
    for(int i=0;i<n;i++)
    cout<<arr[i];
    moveToEnd(arr,n);
    cout<<"\nResulted array : ";
    for(int i=0;i<n;i++)
        cout<<arr[i];
    return 0;
}
// time complexity O(n^2)
*/

//2nd method
#include<bits/stdc++.h>
using namespace std;

int moveToEnd(int arr[],int n){
   int cnt=0;   // count all the non zero values
   for(int i=0;i<n;i++){
    if(arr[i]!=0){
        swap(arr[i],arr[cnt]);   // count for non zero act as index of first 0 .
        cnt++;    // inc count of non zero element everytime
        }
   }
}

int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
    int n=9;
    int arr[n]={3,6,0,8,0,9,0,5,9};
    cout<<"Old Array : ";
    for(int i=0;i<n;i++)
    cout<<arr[i];
    moveToEnd(arr,n);
    cout<<"\nResulted array : ";
    for(int i=0;i<n;i++)
        cout<<arr[i];
    return 0;
}

//Time complexity=O(n)
//auxilary space=O(1)
