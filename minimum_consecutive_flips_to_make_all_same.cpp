
#include<bits/stdc++.h>
using namespace std;

void printGroups(bool arr[],int n){
    for(int i=1;i<n;i++){  // becoz we need to check value with previous one thats why i=1;
        if(arr[i]!=arr[i-1]){
            if(arr[i]!=arr[0])    // checking with first element
                cout<<"From "<<i<<" to ";
            else
                cout<<(i-1)<<endl; // coz we are on next element e.g. 0110 ..now we are on last 0.. so print i-1
        }
    }
    if(arr[n-1]!=arr[0])        //if in last having a single value i.e. not consecutive
        cout<<(n-1)<<endl;
}

int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
    int n=12;
    bool arr[]={1,1,0,0,1,0,0,0,1,0,0,0};
    printGroups(arr,n);
    return 0;
}

// time complexity => O(n)
//auxilary space => O(1)
