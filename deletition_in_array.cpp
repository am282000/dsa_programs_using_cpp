#include<bits/stdc++.h>
using namespace std;

int deleteElement(int arr[],int n,int x){
    int i;
    for(i=0;i<n;i++)
        if(arr[i]==x)   //if jo delete krna vo milgaya
        break;
    if(i==n)   //element na mile to return already phle vali array
        return n;
    for(int j=i;j<n-1;j++)  // j=i jo del hua h vha mov krnr k liye i ki value uper break se mil jayegi
        arr[j]=arr[j+1];    //j+1 vale ko j bna do
    return n-1;  // no of elements b km krdo n-1
}

int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
    int arr[]={10,20,30,40,50,60,70};
    int n=7;  //no of elements
    int x=30; // element we want to delete

    cout<<"Before Deletion"<<endl;
    for(int i=0; i < n; i++){
    cout<<arr[i]<<" ";
    }
    cout<<endl;

    n=deleteElement(arr,n,x);

    cout<<"After Deletion"<<endl;
    for(int i=0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

//Time complexity-Q(n)

//Note - It will delete only the first occurance of that elemment
