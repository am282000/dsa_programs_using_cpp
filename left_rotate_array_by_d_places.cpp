//Naive method

// assume that d<=No. of elements in the array.
// d is ek pura block of elements jisko shift krna hai
//if d is greater than do d-n

/*
#include<bits/stdc++.h>
using namespace std;

int leftRotateByOne(int arr[],int n){
    int temp=arr[0];
    for(int i=1;i<n;i++)
        arr[i-1]=arr[i];   // array of i ko array of i-1 m store krdo
    arr[n-1]=temp;
}

int leftRotate(int arr[],int n,int d){
    for(int j=0;j<d;j++)
       leftRotateByOne(arr,n);  //simply call left shift by one d times
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
    cin>>d;
    leftRotate(arr,n,d);
    cout<<"\nResulted array : ";
    for(int i=0;i<n;i++)
        cout<<arr[i];
    return 0;
}

//time complexity = Q(nd) =Q(n)
//auxilary space =Q(1)

*/

//2 nd method
/*

#include<bits/stdc++.h>
using namespace std;

int leftRotate(int arr[],int n,int d){
    int temp[d];
    for(int i=0;i<d;i++)
        temp[i]=arr[i];
    for(int i=d;i<n;i++)
        arr[i-d]=arr[i];
    for(int i=0;i<d;i++)
        arr[n+i-d]=temp[i];
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
    cin>>d;
    leftRotate(arr,n,d);
    cout<<"\nResulted array : ";
    for(int i=0;i<n;i++)
        cout<<arr[i];
    return 0;
}

//time complexity = Q(d+ n-d  + d)=Q(n-d)=Q(n)
//auxilary space = Q(d)   // becoz temp[d]

*/


// 3rd method

/*
#include<bits/stdc++.h>
using namespace std;

int leftRotate(int arr[],int n,int d){
    reverseArray(arr,0,d-1);   // these are the index values
    reverseArray(arr,d,n-1);
    reverseArray(arr,0,n-1);
}

int reverseArray(int arr[],int low,int high){
    while(low<high){
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}

int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
    int n=6;
    int arr[]={1,2,3,4,5,6};
    int d=2;
    reverseArray(arr,n,d);
    cout<<"\nResulted array : ";
    for(int i=0;i<n;i++)
    cout<<arr[i];
    return 0;
}

//time complexity = Q(d   +   n-d    + n)=Q(2n)=Q(n)
//auxilary space =Q(1)
*/


//ultra optimised - by maddy

/*
#include<bits/stdc++.h>
using namespace std;

int reverseArray(int arr[],int n,int d){
    reverse(arr,arr+d);      // inbuilt function of c++17 ...reverse(start_index, last_index);
    reverse(arr+d,arr+n);
    reverse(arr+0,arr+n);
}

int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
    int n=6;
    int arr[]={1,2,3,4,5,6};
    int d=2;
    reverseArray(arr,n,d);
    cout<<"\nResulted array : ";
    for(int i=0;i<n;i++)
    cout<<arr[i];
    return 0;
}


*/
