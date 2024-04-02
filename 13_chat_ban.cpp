// simple binary search -- logic was pretty simple but couldn't implement

#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool check(ll mid,ll k,ll x)
{
    ll tot=0;
    mid-=1;
    if(mid<=k)
        tot=(mid*(mid+1))/2;
    else
    {
        tot=(k*(k+1))/2;
        mid=2*k-1-mid;
        tot+=((k*(k-1))/2-(mid*(mid+1))/2);
    }
    return tot<x;
}
 
void solve()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll k,x;
        cin>>k>>x;
        ll l=0,r=2*k-1,out=0;
        
        while(l<=r)
        {
            ll mid=l+(r-l)/2;
            if(check(mid,k,x))
            {
                out=mid;
                l=mid+1;
            }
            else
                r=mid-1;
        }
        
        cout<<out<<"\n";
        
    }
}
 
int32_t main()
{
    solve();
}