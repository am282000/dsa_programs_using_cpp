//Naive method -1st method
//In ascending order only

/*
#include<bits/stdc++.h>
using namespace std;

bool isSorted(int arr[],int n){
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            if(arr[j]< arr[i])  // we are checking a smaller element on the right side of all the elements
                return false;
        return true;
}

int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
    int n=5;
    int arr[]={45,65,78,95,105};
    cout<<isSorted(arr,n);
    return 0;
}

//time complexity O(n^2)

*/

//2nd method
// check for a0 a1 a2 ... ai-1 ai ....  if a0 to ai-1 are in sequence
// than check only for ai is either greater or equal to a[i-1] to be true

#include<bits/stdc++.h>
using namespace std;

bool isSorted(int arr[],int n){
    for(int i=1;i<n;i++)   // if the value is null or 1 digit only ... it wont go in this loop ..direct return true
        if(arr[i]< arr[i-1])  // we are checking a smaller element on the right side of all the elements
            return false;
        return true;
}

int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
    int n=5;
    int arr[]={45,65,78,95,105};
    cout<<isSorted(arr,n);
    return 0;
}

//time complexity O(n)
//auxilary space O(1)
