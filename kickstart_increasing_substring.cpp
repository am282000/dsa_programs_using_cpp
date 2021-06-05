
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t, n, i, j;
    string a;

    cin>>t;

    for(j=1; j<=t; j++)
    {
        cin>>n;
        cin>>a;

        ll ans[n];
        ans[0]=1;

        for(i=1; i<n; i++)
        {
            if(a[i]>a[i-1])
            ans[i]=ans[i-1]+1;
            else
            ans[i]=1;
        }
        cout<<"Case #"<<j<<": ";
        for(i=0; i<n; i++)
        cout<<ans[i]<<" ";
        cout<<"\n";

    }
}
