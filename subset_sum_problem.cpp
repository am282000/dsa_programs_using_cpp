// clear idea with picture subsets_sum_problem.png
//in this we have to make all the subsets .. and ensure that the sum of these subsets equal to the the given sum or not.
// as we knw from the pic we are adding the elements from last in every level
//so on left branch we are not adding elements ... on right we are adding elements
//we can solve it easily by vector and optimise it with backtracking ..but in this one we are simply manazing the sum varaible
// add every level whatever is the element add we are simply going to subtract it from the sum variable

#include<bits/stdc++.h>
using namespace std;

int countSubsets(int arr[], int n, int sum){
    if(n==0)
        return sum==0?1:0;    // if the n=0 program finishes .. if at last we have sum=0 than gona print true else false
    return countSubsets(arr,n-1,sum)+  // left vali side from pic ..where we are not adding elements
    countSubsets(arr,n-1,sum-arr[n-1]);   //right vali side where where we are adding elements e.g. if we added 9 ..do 25-9 ..
}

int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
    int arr[]={10,20,15};   // we passs all the elements here
    int n=3,sum=25;   // n= no of elements we passed in arr    ... sum = total sum we wanted
    cout<<countSubsets(arr,n,sum); // give the output how many have subsets have sum 25.
    return 0;
}

//time complexity = Q(2^n -1) + 2^n   ...... if n=3 .. 2^3=8 i.e ans + extra 7 calls as seen in pic cleraly
 //so final time complexity is  = Q(2^n)
