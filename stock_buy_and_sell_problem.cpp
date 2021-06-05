//We know prices of stocks in advance

//Naive method
/*
#include<bits/stdc++.h>
using namespace std;

int maxProfit(int arr[],int startVal,int endVal){
    if(endVal<=startVal)
        return 0;
    int profit=0;
    for(int i=startVal;i<endVal;i++){
        for(int j=i+1;j<=endVal;j++){
            if(arr[j]>arr[i]){
                int curr_val=(arr[j]-arr[i]) + maxProfit(arr,startVal,i-1) + maxProfit(arr,j+1,endVal);
                profit=max(profit,curr_val);
            }
        }
    }
    return profit;
}

int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
     int arr[]={1,5,3,8,12};
    int startVal=0;
    int endVal=4;
    cout<<maxProfit(arr,startVal,endVal);
    return 0;
}
*/


//Method-2
/*
=> simply look for the peak value of the prices till they they are increasing continuously - than sell it
=> if they are coming down down more down lookk for lowest price till they are decreasing continuously - than buy it
=> simply look for the peak value of the prices again till they they are increasing continuously - than sell it
*/

#include<bits/stdc++.h>
using namespace std;

int maxProfit(int arr[],int n){
   int profit=0;
    for(int i=1;i<n;i++){ // starting from i=1;
        if(arr[i]>arr[i-1])
            profit=profit+(arr[i]-arr[i-1]);       //this will give us the cummulative sum i.e. sum of litlle higher higher parts
        }                                         // e.g 8-3   +   12-8
    return profit;
}

int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
    int arr[]={1,5,3,8,12};
    int n=5;
    cout<<maxProfit(arr,n);
    return 0;
}
