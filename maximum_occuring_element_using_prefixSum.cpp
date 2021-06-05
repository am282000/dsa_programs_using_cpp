/*
There is 2 array L[]  and R[]

Element of Left and Right array together gives a range .. Considering L element is always less than or equal to right element.

For better understanding go @maximum_occuring_element_using_prefixSum(1).png

Now find the element which is available maximum no of times from all ranges.

For better understanding go @maximum_occuring_element_using_prefixSum(2).png and @maximum_occuring_element_using_prefixSum(3).png

write an array of size 1000 ... with default values as 0

represent left array elements in binary format eith 0 if no element or 1 is any element

than right array is putting -1 at (right+1 th) element

Now simply add elements of the elements

now max value from this is the answer
*/

#include<bits/stdc++.h>
using namespace std;

int maxOcc(int L[], int R[], int n){
    int arr[1000];
    memset (arr,0,sizeof(arr));   // to make all defaults elements as zero
    for(int i=0;i<n;i++){
        arr[L[i]]++;    // Make L elements +1
        arr[R[i]+1]--;     // Make R+1 elements -1
    }

    int maxm = arr[0], res = 0;
    for(int i=1;i<1000;i++){
        arr[i]=arr[i] + arr[i-1];   // to plus resulted elements
        if(maxm <arr[i]){
            maxm=arr[i];     // to find max element
            res=i;            // index of this max element is res
        }
    }
    return res;     // the eleement that is maximum tym occuring from all ranges.
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int L[] = {1, 2, 3};
    int R[] = {3, 5, 7};
    int n = 3;

    cout<<maxOcc(L, R, n);
}


