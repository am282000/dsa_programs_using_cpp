//naive method

// we have to look for an element who is greater of all the right array elements .. if we find an element in right >= than
// that we are not going to consider that element as leader.

/*
#include<bits/stdc++.h>
using namespace std;

int leaders(int arr[],int n){
    for(int i=0;i<n;i++){
        bool flag=false;
        for(int j=i+1;j<n;j++){
            if(arr[i]<=arr[j]){
                flag=true;
                break;
            }
        }
        if(flag==false)
            cout<<arr[i]<<" ";
    }
}

int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
    int n=7;
    int arr[]={7,5,78,6,9,1,2};
    leaders(arr,n);
    return 0;
}

//time complexity = O(n^2)
*/

//Optimized method-2
/*
=>In this we have to traverse from the last ... the last element is always a leader .. and assign it as a current_leader
=> and traverse =>om right to left ..if we find a element only greater than current_leader ..than make him current leader and
=> print it ...*/

#include<bits/stdc++.h>
using namespace std;

int leaders(int arr[],int n){
    int curr_leader = arr[n-1];     //last index is always a leader
    cout<<curr_leader<<" ";
    for(int i=n-2;i>=0;i--){
        if(arr[i]>curr_leader){
            curr_leader=arr[i];     // aarray of i ko current leader bna do
            cout<<curr_leader<<" ";
        }
    }
}

int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
    int n=7;
    int arr[]={7,5,78,6,9,1,2};
    leaders(arr,n);
    return 0;
}

//Time complexity = Q(n)
