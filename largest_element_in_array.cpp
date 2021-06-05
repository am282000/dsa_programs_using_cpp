//naive method

/*
#include<bits/stdc++.h>
using namespace std;

int getLargest(int arr[],int n){
    for(int i=0;i<n;i++){
        bool flag =true;
        for (int j=0;j<n;j++){
            if(arr[j]>arr[i]){
                flag=false;
                break;
            }
        }
        if(flag==true)
            return i;
    }
    return -1;   // this line will never execute... becoz we have to return something thats why we did this.
}

int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
    int arr[]={30,40,37,92,43,54};
    int n=6;  //no of elements in array
    cout<<getLargest(arr,n);   // this gona return the index of largest element
    return 0;
}

//time complexity = Q(n^2)  .. worst case when array is sorted Q(n^2) ... best Q(n)

*/

//2nd method
//Better method -> find largest in one traversal .. by replacing res variable everytime.

#include<bits/stdc++.h>
using namespace std;

int getlargest(int arr[],int n){
    int res=0;
    for(int i=1;i<n;i++)
        if(arr[i]>arr[res])
            res = i;
        return res;
}

int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
    int arr[]={20,30,90,50,60};
    int n=5;
    cout<<getlargest(arr,n);
    return 0;
}

//time complexity = Q(n)
