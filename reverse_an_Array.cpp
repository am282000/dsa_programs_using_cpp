#include<bits/stdc++.h>
using namespace std;

int reverseArray(int arr[],int n){
    int low=0,high=n-1;
    while(low<high){  //when low and high cross each other or equal to each other than only we come out of loop
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
    reverseArray(arr,n);
//    reverse(arr, arr + n);   // Reverse the array - inbuilt fealure

    cout << "Reversed Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}

//Time complexity =Q(n/2)=> Q(n)
//auxilary space = Q(1)
