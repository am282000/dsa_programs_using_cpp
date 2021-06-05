
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll tc, n, m, i, j, res, k, c;
    string a;

    cin>>tc;

    for(j=1; j<=tc; j++)
    {
        cin>>n>>k;
        cin>>a;
        c=0;
        for(i=0; i<(n/2); i++)
        {
            if(a[i]!=a[n-i-1])
            {
                c++;
            }
        }
        res=abs(k-c);
        cout<<"Case #"<<j<<": "<<res<<"\n";
    }
}
