// Naive method
/*
#include<bits/stdc++.h>
using namespace std;

int func(int arr[],int n ,int k){
    int max_sum= INT_MIN;   // in start max_sum = negative infinity
    for(int i=0;i+k-1<n;i++){
        int sum=0;
        for(int j=0;j<k;j++)
            sum=sum+arr[i+j];
        max_sum=max(max_sum,sum); // to store current max value
    }
    return max_sum;
}

int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
    int n=6;
    int arr[]={1,8,30,-5,20,7};
    int k=2;
    cout<<func(arr,n,k);
    return 0;
}

// time complexity =O(n-k)*k
*/



// 2nd method

/*
#include<bits/stdc++.h>
using namespace std;

int func(int arr[],int n ,int k){
    int curr_sum=0;
    for(int i=0;i<k;i++)
        curr_sum=curr_sum+arr[i];   // to find current sum

    int max_sum=curr_sum;
    for(int i=k;i<n;i++){       // int i= k ? becoz i is less than k in above loop .. so we have to addd k this time
        curr_sum= curr_sum + arr[i] - arr[i-k];    // take previous sum + next value - previous sum ki 1st value
        max_sum=max(max_sum,curr_sum);
    }
    return max_sum;
}

int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
    int n=6;
    int arr[]={1,8,30,-5,20,7};
    int k=2;
    cout<<func(arr,n,k);
    return 0;
}

//time complexity = O(k) + O(n-k)  => O(n)
*/



// find the given sum is there or not ? - Error h isme


/*
#include<bits/stdc++.h>
using namespace std;

void func(int arr[],int n ,int k, int givenSum){
    int curr_sum=0;
    for(int i=0;i<k;i++)
        curr_sum=curr_sum+arr[i];   // to find current sum

    int max_sum=curr_sum;
    for(int i=k;i<n;i++){       // int i= k ? becoz i is less than k in above loop .. so we have to addd k this time
        curr_sum= curr_sum + arr[i] - arr[i-k];    // take previous sum + next value - previous sum ki 1st value
        max_sum=max(max_sum,curr_sum);
    }

    if(curr_sum==givenSum )
       cout<<"Mai hoon "<<endl;
    else
        cout<< "Mai nhi hu "<<endl;
}

int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
    int n=6;
    int arr[]={1,8,30,-5,20,7};
    int k=2;
    int givenSum =38;
    func(arr,n,k,givenSum);
    return 0;
}
*/



// Unsorted = non negative array ... find is there a given sum - Error : aukaat m rh kr solve krein

// Naive method
/*
#include<bits/stdc++.h>
using namespace std;

int func(int arr[],int n , int givenSum){
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum=sum+arr[j];
            if(sum==givenSum)
                return true;
            else
                return false;
        }
    }
}

int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
    int n=6;
    int arr[]={1,8,30,5,20,7};
    int givenSum =25;
    func(arr,n,givenSum);
    return 0;
}
*/



// Unsorted = non negative array ... find is there a given sum
//optimised one

/*
#include<bits/stdc++.h>
using namespace std;

int subArraySum(int arr[], int n, int sum)
{
	int curr_sum = arr[0], start = 0, i;

	for (i = 1; i <= n; i++)
	{

		while (curr_sum > sum && start < i-1)  		// If curr_sum exceeds the sum, then remove the starting elements
		{
			curr_sum = curr_sum - arr[start];
			start++;  // kyuki aage k index se values udaani h ... e.g.  0 vali 1 vali than so on
		}


		if (curr_sum == sum) 	// If curr_sum becomes equal to sum, then return true
		{
			cout<<"Sum found between indexes "<< start <<" and "<< i-1<<endl;
			return 1;
		}

		if (i < n) // Add this element to curr_sum
		curr_sum = curr_sum + arr[i];
	}

	cout<<"No subarray found";
	return 0;
}


int main()
{
	int arr[] = {15, 2, 4, 8, 9, 5, 10, 23};
	int n = sizeof(arr)/sizeof(arr[0]);
	int sum = 23;
	subArraySum(arr, n, sum);
	return 0;
}

*/
