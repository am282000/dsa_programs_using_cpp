//Naive Method

/*
#include<bits/stdc++.h>
using namespace std;


bool checkEquilibrium(int arr[], int n)
{
	for(int i  = 0; i < n; i++)
	{
		int l_sum = 0, r_sum = 0;

		for(int j = 0; j < i; j++)
			l_sum += arr[j];          // left side sum

		for(int j = i + 1; j < n; j++)
			r_sum += arr[j];          // right side sum

		if(l_sum == r_sum)
			return true;
	}
	return false;
}


int main() {
      int arr[] = {3, 4, 8, -9, 20, 6}, n = 6;
      printf("%s",checkEquilibrium(arr, n)? "true" : "false");

}

// time complexity = O(n^2);

*/

// Method 2

// simillarly find prefix sum array - O(n)
// than find sufflix sum array = O(n)
// than check for prfixsum(i-1)==suffixsum(i+1)  - O(n)

// time complexity -O(n)
//space complexity = 3 auxilary araays = 3O(n) =>O(n) thats why not considering this method


// Method 3  - Just chck left sum = total -arr[i]

#include<bits/stdc++.h>
using namespace std;

bool isEquilibrium(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++)
        sum=sum+arr[i];    // Total sum

    int l_sum=0;
    for(int i=0;i<n;i++){
        if(l_sum==sum-arr[i])     // total - arr[i] = right sum
        return true;
    l_sum = l_sum+arr[i];  // keep  incrementing l_sum
    sum = sum-arr[i];      // keep decrementing sum
    }
    return false;
}

int main(){
    int arr[]={1,2,3,4,3,21,7,6};
    int n= 8;
    cout<<isEquilibrium(arr,n);
    return 0;
}
