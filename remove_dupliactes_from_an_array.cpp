//from a sorted array only

//naive method
/*
#include<bits/stdc++.h>
using namespace std;

int removeDup(int arr[],int n){
    int temp[n]; // create a temp array of same size
    temp[0]=arr[0];  // at first index in temp we always have arr[0] th element .
    int res=1; // coz we have 1 value now
    for(int i=1;i<n;i++){
        if(temp[res-1]!=arr[i]){
            temp[res]=arr[i];
            res++;
        }
    }
    for(int i=0;i<res;i++)   // copy temp value till res into old array,
        arr[i]=temp[i];
    return res;
}

int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
    int n=10;
    int arr[]={1,2,2,3,3,3,4,7,9,9};
    n= removeDup(arr,n);
     cout<<"After Removal"<<endl;
     for(int i = 0; i < n; i++){
       		cout<<arr[i]<<" ";
       }
    return 0;
}

//time complexity =Q(n)
//auxilary space Q(n)
*/

//method 2

 #include<bits/stdc++.h>
using namespace std;

int removeDup(int arr[],int n){
    int res=1; // coz we have a value at 0 th index
    for(int i=1;i<n;i++){
        if(arr[res-1]!=arr[i]){
           arr[res]=arr[i];
            res++;
        }
    }
    return res;
}

int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
    int n=10;
    int arr[]={1,2,2,3,3,3,4,7,9,9};
    n= removeDup(arr,n);
     cout<<"After Removal"<<endl;
     for(int i = 0; i < n; i++){
       		cout<<arr[i]<<" ";
       }
    return 0;
}

//time complexity =O(n)
//auxilary space O(1)
