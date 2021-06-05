//naive method
//first find largest in one traversal ..than second largest in other traversal(same as we do with largesrt)

/*
#include<bits/stdc++.h>
using namespace std;

int getlargest(int arr[],int n){
    int largest=0;
    for(int i=1;i<n;i++)
        if(arr[i]>arr[largest])
            largest = i;
        return largest;
}

int getSecondLargest(int arr[],int n){
    int largest=getlargest(arr,n);    // calling the largest vala function and storing it in any variable
    int res=-1;  // we can't declace it as zero .. becoz there is possibility that no second largest element exists.
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[largest]){   // check for those element which is not equal to largest
            if(res==-1)  // this will run only 1 tym tym i.e. for the first value that is not equal to largest index
                res=i;   //update the value of res as index value i.e res =0 #only 1 tym later it won't .coz res!=-1 now.
            else if(arr[i]>arr[res])
                res=i;
        }
    }
    return res;
}



int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
    int arr[]={10,30,90,50,160};
    int n=5;
    cout<<getSecondLargest(arr,n);
    return 0;
}

//time complexity = Q(n^2)

*/


//2nd method
/*
let us consider it with possible cases there is a array a0,a1,a2,a3.....ai-1,ai
we need to find largest and second largest from a0 to ai-1 ... than possible cases for the value of ai
#case 1=> a[i]>a[largest] : than do res =largest , largest=i
#case 2=> a[i]=a[largest] : Ignore
#case 3=> a[i]<a[largest] : res==-1 : res =i  // e.g. 10 10 10 and we add 7  #no second largest before
                  a[i]<=a[res] : ignore it // e.g 10 12 9 and we add  6 or 10 #smaller than or equal to 2nd largest
                  a[i]>a[res] : res=i  // e.g. 10 12 9 and we add 11 #greater than second largest

*/

#include<bits/stdc++.h>
using namespace std;

int secondLargest(int arr[],int n){
    int res=-1, largest=0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[largest]){    //case 1
            res=largest;
            largest=i;
        }
        else if(arr[i]!=arr[largest]){  //case 3   //case 2 is ignored
            if(res==-1 || arr[i]>arr[res])
                res=i;
        }
    }
    return res;
}

int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
    int arr[]={10,30,90,50,160};
    int n=5;
    cout<<secondLargest(arr,n);
    return 0;
}

//time complexity = Q(n)
//auxilary space =Q(1)
