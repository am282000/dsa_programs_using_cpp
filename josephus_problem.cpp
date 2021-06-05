// Kill the person in a circle starting from him self


//Note- position of people begin with 0.  not from 1.
#include<bits/stdc++.h>
using namespace std;

int jos(int n,int k){
    if(n==1)
        return 0;
    else
        return (jos(n-1,k)+k)%n;    //+k is becoz of general case when one is killed after this rotation is done.
                                    // for this it is +k... %n is for taaki after adding k value n se b greater na ho jaye
}

int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
    int n=5 ,k=3;
    cout<<jos(n,k);
    return 0;
}

//if k-1 ,k ,k+1 are there in circle 1 ........and  0,1,2 are in another circle
//k-1 is killed
// thn      k tends to 0
//          k+1 tends to 1     thats how we got +k.






//Time complexity = Q(n-1)+c = Q(n)


//2nd question => Note- if the position of people begin with 1.  not from 0.


//simply add 1 in the output returned by jos func

/*
#include<bits/stdc++.h>
using namespace std;

int jos(int n,int k){
    if(n==1)
        return 0;
    else
        return (jos(n-1,k)+k)%n;
}

int newjos(int n, int k){
    return jos(n,k)+1;
}

int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
    int n=5 ,k=3;
    cout<<newjos(n,k);
    return 0;
}
*/
