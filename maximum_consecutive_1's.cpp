//naive method

//if no = 1 cnt ++ else break
/*
#include<bits/stdc++.h>
using namespace std;

int maxConsecutiveOnes(bool arr[], int n){
    int res=0;
    for(int i=0;i<n;i++){
        int cnt =0;
        for(int j=i;j<n;j++){
            if(arr[j]==1)
                cnt++;
            else break;
        }
        res=max(res,cnt);
    }
    return res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n=13;
    bool arr[]={0,1,1,0,0,1,1,1,0,1,1,1,1};
    cout<<maxConsecutiveOnes(arr,n);
    return 0;
}

//time complexity = O(n^2)
//auxilary space = O(1)
*/


//method 2
// if no is 0 do cnt = 0 ...if no is 1 ..cnt++ ... res =max(res,cnt)

#include<bits/stdc++.h>
using namespace std;

int maxConsecutiveOnes(bool arr[], int n){
    int res=0;
    int cnt = 0;
    for(int i=0;i<n;i++){
        if(arr[i]==0)
            cnt=0;
        else {
            cnt++;
            res = max(res,cnt);
        }
    }
    return res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n=13;
    bool arr[]={0,1,1,0,0,1,1,1,0,1,1,1,1};
    cout<<maxConsecutiveOnes(arr,n);
    return 0;
}

//time complexity = O(n)
//auxilary space = O(1)
