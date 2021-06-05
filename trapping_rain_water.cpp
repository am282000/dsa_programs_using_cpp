// Array contains height of bars

//Naive method
/*
#include<bits/stdc++.h>
using namespace std;

int getWater(int arr[],int n){
    int res=0;
    for(int i=1;i<n-1;i++){   // this loop is for 1 to n-2 .. becoz last and first pr paani ikthaa nhi hoga
        int lmax=arr[i];
        for(int j=0;j<i;j++)    // this loop is from 0 to i-1 .. becoz arr[i] value is already assigned
            lmax=max(lmax,arr[j]);
        int rmax=arr[i];
        for(int j=i+1;j<n;j++)
            rmax=max(rmax,arr[j]);
        res=res+(min(lmax,rmax)-arr[i]);
    }
    cout<< res;
}

int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
     int arr[]={3,0,1,2,5};
    int n=5;
    getWater(arr,n);
    return 0;
}

//time complexity Q(n^2)
*/

//method 2 => pre compute the lmax and rmax . rather than computing for every index

//2 arraay bnayeinge lmax and max to store max value till now in that array .

//better understand with @picnamed trapping_rain_water
#include<bits/stdc++.h>
using namespace std;

int getWater(int arr[],int n){
    int res=0;
    int lmax[n],rmax[n];  //array ki form m lena h #imp
    lmax[0]=arr[0];  //start value
    for(int i=1;i<n;i++)
        lmax[i]=max(arr[i],lmax[i-1]);   // coz 0 to i-1 k liy ecomputr krna h left max ko
    rmax[n-1]=arr[n-1]; //end value
    for(int i=n-2;i>=0;i--)   // from back to front
        rmax[i]= max(arr[i],rmax[i+1]);   // coz n-2 to 0 tk cahiye

    for(int i=1;i<n-1;i++){   // this loop is for 1 to n-2 .. becoz last and first pr paani ikthaa nhi hoga
        res=res+(min(lmax[i],rmax[i])-arr[i]);
    }
    return res;
}

int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
     int arr[]={3,0,1,2,5};
    int n=5;
    cout<<getWater(arr,n);
    return 0;
}

//time complexity =Q(n)+Q(n)+Q(n)=Q(n)
//auxilary space =Q(n)
