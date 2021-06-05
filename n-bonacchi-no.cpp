// CPP program print first M terms of a N-bonacci series.

//fibonachii is sum of starting 2 values
// n bonachii is sum of starting n values.


#include<bits/stdc++.h>
using namespace std;

void bonacciseries(long n, int m) {
    //Assuming m>n
    int arr[m]={0};   // all elements before a[n-1] is 0; thats why it is in array
    arr[n-1]=1;
    arr[n]=1;     // we are not declaring thm we are computing values for thm

    //uses sliding window
    for(int i=n+1;i<m;i++)  // m is the total length .. a[n] = we already give as 1. i=n+1 is the next value that we are finding
                                        //0 0 1 1 2 4 7 13
        arr[i]=2*arr[i-1] -arr[i-n-1];        // apply it on a value

    //printing result
    for(int i=0;i<m;i++)
        cout<< arr[i]<< " ";
}

// Driver's Code
int main()
{
	int N = 4, M = 12;
	bonacciseries(N, M);
	return 0;
}
