/*
simple working :
=>We can only insert if the array have some extra space already . We can't insert in a full array.
=>pos begins from 1 while index begins from 0

=>Do idx=pos-1 to find the index no we are going to insert (as explained above)
=>run a loop from n-1(becoz index value leni h) to idx with i-- .... and shift the array value by one next .. do same till idx
=>now put your value on that index where where you wished to do
=>return n+1 becoz 1 new element is inserted
*/

#include<bits/stdc++.h>
using namespace std;

int insertElement(int arr[],int n,int x,int cap,int pos){
    if(n==cap)    // if n=capacity return krdo already stored array value
        return n;
    int idx=pos-1;
    for(int i=n-1;i>=idx;i--){
        arr[i+1]=arr[i];
    }
    arr[idx]=x;
    return n+1;
}

int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
    int arr[]={10,20,30,40,50,60,70};
    int n=7;  //no of elements
    int x=45; // element we want to insert
    int pos= 5;  // at which position we want to insert
    int cap=10; // capacity of array

    cout<<"Before Insertion"<<endl;
    for(int i=0; i < n; i++){
    cout<<arr[i]<<" ";
    }
    cout<<endl;

    n=insertElement(arr,n,x,cap,pos);

    cout<<"After Insertion"<<endl;
    for(int i=0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

//Time complexity = O(n)
//at beginning =O(1)  at end O(n)

/*
This is called Pushback in c++ through vectors....
In case of dynamic sized array
 we can insert element at last only

 Time complexity of every insert =O(1)
 Avg time complexity for n+1 inserts at the end=O(1)

 Note - dynamic if size is full - they pre allocate some memory i.e. double the old memory and copy all the elements
 in this new one .. and delete the old array.
 */
